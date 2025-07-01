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

#include "OAIGithubCommit.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIGithubCommit::OAIGithubCommit(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGithubCommit::OAIGithubCommit() {
    this->initializeModel();
}

OAIGithubCommit::~OAIGithubCommit() {}

void OAIGithubCommit::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_url_isSet = false;
    m_url_isValid = false;

    m_message_isSet = false;
    m_message_isValid = false;

    m_author_isSet = false;
    m_author_isValid = false;
}

void OAIGithubCommit::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGithubCommit::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_url_isValid = ::dc_rest::fromJsonValue(m_url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;

    m_message_isValid = ::dc_rest::fromJsonValue(m_message, json[QString("message")]);
    m_message_isSet = !json[QString("message")].isNull() && m_message_isValid;

    m_author_isValid = ::dc_rest::fromJsonValue(m_author, json[QString("author")]);
    m_author_isSet = !json[QString("author")].isNull() && m_author_isValid;
}

QString OAIGithubCommit::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGithubCommit::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_url_isSet) {
        obj.insert(QString("url"), ::dc_rest::toJsonValue(m_url));
    }
    if (m_message_isSet) {
        obj.insert(QString("message"), ::dc_rest::toJsonValue(m_message));
    }
    if (m_author.isSet()) {
        obj.insert(QString("author"), ::dc_rest::toJsonValue(m_author));
    }
    return obj;
}

QString OAIGithubCommit::getId() const {
    return m_id;
}
void OAIGithubCommit::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIGithubCommit::is_id_Set() const{
    return m_id_isSet;
}

bool OAIGithubCommit::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIGithubCommit::getUrl() const {
    return m_url;
}
void OAIGithubCommit::setUrl(const QString &url) {
    m_url = url;
    m_url_isSet = true;
}

bool OAIGithubCommit::is_url_Set() const{
    return m_url_isSet;
}

bool OAIGithubCommit::is_url_Valid() const{
    return m_url_isValid;
}

QString OAIGithubCommit::getMessage() const {
    return m_message;
}
void OAIGithubCommit::setMessage(const QString &message) {
    m_message = message;
    m_message_isSet = true;
}

bool OAIGithubCommit::is_message_Set() const{
    return m_message_isSet;
}

bool OAIGithubCommit::is_message_Valid() const{
    return m_message_isValid;
}

OAIGithubAuthor OAIGithubCommit::getAuthor() const {
    return m_author;
}
void OAIGithubCommit::setAuthor(const OAIGithubAuthor &author) {
    m_author = author;
    m_author_isSet = true;
}

bool OAIGithubCommit::is_author_Set() const{
    return m_author_isSet;
}

bool OAIGithubCommit::is_author_Valid() const{
    return m_author_isValid;
}

bool OAIGithubCommit::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_author.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGithubCommit::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_url_isValid && m_message_isValid && m_author_isValid && true;
}

} // namespace dc_rest
