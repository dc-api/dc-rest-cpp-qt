/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

/**
 * Based on http://www.creativepulse.gr/en/blog/2014/restful-api-requests-using-qt-cpp-for-linux-mac-osx-ms-windows
 * By Alex Stylianos
 *
 **/

#ifndef OAI_HTTPREQUESTWORKER_H
#define OAI_HTTPREQUESTWORKER_H

#include <QMap>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QObject>
#include <QString>
#include <QTimer>
#include <QRandomGenerator>

#include "OAIHttpFileElement.h"

namespace dc_rest {

enum OAIHttpRequestVarLayout {
    NOT_SET,
    ADDRESS,
    URL_ENCODED,
    MULTIPART
};

class OAIHttpRequestInput {

public:
    QString url_str;
    QString http_method;
    OAIHttpRequestVarLayout var_layout;
    QMap<QString, QString> vars;
    QMap<QString, QString> headers;
    QList<OAIHttpFileElement> files;
    QByteArray request_body;

    OAIHttpRequestInput();
    OAIHttpRequestInput(QString v_url_str, QString v_http_method);
    void initialize();
    void add_var(QString key, QString value);
    void add_file(QString variable_name, QString local_filename, QString request_filename, QString mime_type);
};

class OAIHttpRequestWorker : public QObject {
    Q_OBJECT

public:
    explicit OAIHttpRequestWorker(QObject *parent = nullptr, QNetworkAccessManager *manager = nullptr);
    virtual ~OAIHttpRequestWorker();

    QByteArray response;
    QNetworkReply::NetworkError error_type;
    QString error_str;

    QMap<QString, QString> getResponseHeaders() const;
    QString http_attribute_encode(QString attribute_name, QString input);
    void execute(OAIHttpRequestInput *input);
    static QSslConfiguration *sslDefaultConfiguration;
    void setTimeOut(int timeOutMs);
    void setWorkingDirectory(const QString &path);
    OAIHttpFileElement getHttpFileElement(const QString &fieldname = QString());
    QByteArray *getMultiPartField(const QString &fieldname = QString());
    void setResponseCompressionEnabled(bool enable);
    void setRequestCompressionEnabled(bool enable);
    int  getHttpResponseCode() const;

Q_SIGNALS:
    void on_execution_finished(OAIHttpRequestWorker *worker);
    void downloadProgress(qint64 bytesReceived, qint64 bytesTotal);

private:
    enum OAICompressionType{
        Zlib,
        Gzip
    };
    QNetworkAccessManager *manager;
    QMap<QString, QString> headers;
    QMap<QString, OAIHttpFileElement> files;
    QMap<QString, QByteArray *> multiPartFields;
    QString workingDirectory;
    QTimer timeOutTimer;
    bool isResponseCompressionEnabled;
    bool isRequestCompressionEnabled;
    int  httpResponseCode;
    QRandomGenerator randomGenerator;

    void on_reply_timeout(QNetworkReply *reply);
    void on_reply_finished(QNetworkReply *reply);
    void process_response(QNetworkReply *reply);
    QByteArray decompress(const QByteArray& data);
    QByteArray compress(const QByteArray& input, int level, OAICompressionType compressType);
};

} // namespace dc_rest

#endif // OAI_HTTPREQUESTWORKER_H
