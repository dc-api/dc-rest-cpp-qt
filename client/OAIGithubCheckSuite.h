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
 * OAIGithubCheckSuite.h
 *
 * 
 */

#ifndef OAIGithubCheckSuite_H
#define OAIGithubCheckSuite_H

#include <QJsonObject>

#include "OAIGithubCheckApp.h"
#include "OAIGithubCheckPullRequest.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIGithubCheckApp;
class OAIGithubCheckPullRequest;

class OAIGithubCheckSuite : public OAIObject {
public:
    OAIGithubCheckSuite();
    OAIGithubCheckSuite(QString json);
    ~OAIGithubCheckSuite() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getHeadSha() const;
    void setHeadSha(const QString &head_sha);
    bool is_head_sha_Set() const;
    bool is_head_sha_Valid() const;

    OAIGithubCheckApp getApp() const;
    void setApp(const OAIGithubCheckApp &app);
    bool is_app_Set() const;
    bool is_app_Valid() const;

    QString getConclusion() const;
    void setConclusion(const QString &conclusion);
    bool is_conclusion_Set() const;
    bool is_conclusion_Valid() const;

    QString getHeadBranch() const;
    void setHeadBranch(const QString &head_branch);
    bool is_head_branch_Set() const;
    bool is_head_branch_Valid() const;

    QList<OAIGithubCheckPullRequest> getPullRequests() const;
    void setPullRequests(const QList<OAIGithubCheckPullRequest> &pull_requests);
    bool is_pull_requests_Set() const;
    bool is_pull_requests_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_head_sha;
    bool m_head_sha_isSet;
    bool m_head_sha_isValid;

    OAIGithubCheckApp m_app;
    bool m_app_isSet;
    bool m_app_isValid;

    QString m_conclusion;
    bool m_conclusion_isSet;
    bool m_conclusion_isValid;

    QString m_head_branch;
    bool m_head_branch_isSet;
    bool m_head_branch_isValid;

    QList<OAIGithubCheckPullRequest> m_pull_requests;
    bool m_pull_requests_isSet;
    bool m_pull_requests_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIGithubCheckSuite)

#endif // OAIGithubCheckSuite_H
