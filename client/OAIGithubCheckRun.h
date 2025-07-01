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

/*
 * OAIGithubCheckRun.h
 *
 * 
 */

#ifndef OAIGithubCheckRun_H
#define OAIGithubCheckRun_H

#include <QJsonObject>

#include "OAIGithubCheckPullRequest.h"
#include "OAIGithubCheckRunOutput.h"
#include "OAIGithubCheckSuite.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIGithubCheckSuite;
class OAIGithubCheckRunOutput;
class OAIGithubCheckPullRequest;

class OAIGithubCheckRun : public OAIObject {
public:
    OAIGithubCheckRun();
    OAIGithubCheckRun(QString json);
    ~OAIGithubCheckRun() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getHtmlUrl() const;
    void setHtmlUrl(const QString &html_url);
    bool is_html_url_Set() const;
    bool is_html_url_Valid() const;

    OAIGithubCheckSuite getCheckSuite() const;
    void setCheckSuite(const OAIGithubCheckSuite &check_suite);
    bool is_check_suite_Set() const;
    bool is_check_suite_Valid() const;

    QString getConclusion() const;
    void setConclusion(const QString &conclusion);
    bool is_conclusion_Set() const;
    bool is_conclusion_Valid() const;

    QString getDetailsUrl() const;
    void setDetailsUrl(const QString &details_url);
    bool is_details_url_Set() const;
    bool is_details_url_Valid() const;

    OAIGithubCheckRunOutput getOutput() const;
    void setOutput(const OAIGithubCheckRunOutput &output);
    bool is_output_Set() const;
    bool is_output_Valid() const;

    QList<OAIGithubCheckPullRequest> getPullRequests() const;
    void setPullRequests(const QList<OAIGithubCheckPullRequest> &pull_requests);
    bool is_pull_requests_Set() const;
    bool is_pull_requests_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString m_html_url;
    bool m_html_url_isSet;
    bool m_html_url_isValid;

    OAIGithubCheckSuite m_check_suite;
    bool m_check_suite_isSet;
    bool m_check_suite_isValid;

    QString m_conclusion;
    bool m_conclusion_isSet;
    bool m_conclusion_isValid;

    QString m_details_url;
    bool m_details_url_isSet;
    bool m_details_url_isValid;

    OAIGithubCheckRunOutput m_output;
    bool m_output_isSet;
    bool m_output_isValid;

    QList<OAIGithubCheckPullRequest> m_pull_requests;
    bool m_pull_requests_isSet;
    bool m_pull_requests_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIGithubCheckRun)

#endif // OAIGithubCheckRun_H
