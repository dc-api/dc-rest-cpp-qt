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
 * OAIGithubComment.h
 *
 * 
 */

#ifndef OAIGithubComment_H
#define OAIGithubComment_H

#include <QJsonObject>

#include "OAIGithubUser.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIGithubUser;

class OAIGithubComment : public OAIObject {
public:
    OAIGithubComment();
    OAIGithubComment(QString json);
    ~OAIGithubComment() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getId() const;
    void setId(const qint32 &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getHtmlUrl() const;
    void setHtmlUrl(const QString &html_url);
    bool is_html_url_Set() const;
    bool is_html_url_Valid() const;

    OAIGithubUser getUser() const;
    void setUser(const OAIGithubUser &user);
    bool is_user_Set() const;
    bool is_user_Valid() const;

    QString getBody() const;
    void setBody(const QString &body);
    bool is_body_Set() const;
    bool is_body_Valid() const;

    QString getCommitId() const;
    void setCommitId(const QString &commit_id);
    bool is_commit_id_Set() const;
    bool is_commit_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_html_url;
    bool m_html_url_isSet;
    bool m_html_url_isValid;

    OAIGithubUser m_user;
    bool m_user_isSet;
    bool m_user_isValid;

    QString m_body;
    bool m_body_isSet;
    bool m_body_isValid;

    QString m_commit_id;
    bool m_commit_id_isSet;
    bool m_commit_id_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIGithubComment)

#endif // OAIGithubComment_H
