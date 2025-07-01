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
 * OAIMessageAllowedMentionsRequest.h
 *
 * 
 */

#ifndef OAIMessageAllowedMentionsRequest_H
#define OAIMessageAllowedMentionsRequest_H

#include <QJsonObject>

#include <QSet>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {

class OAIMessageAllowedMentionsRequest : public OAIObject {
public:
    OAIMessageAllowedMentionsRequest();
    OAIMessageAllowedMentionsRequest(QString json);
    ~OAIMessageAllowedMentionsRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QSet<QString> getParse() const;
    void setParse(const QSet<QString> &parse);
    bool is_parse_Set() const;
    bool is_parse_Valid() const;

    QSet<QString> getUsers() const;
    void setUsers(const QSet<QString> &users);
    bool is_users_Set() const;
    bool is_users_Valid() const;

    QSet<QString> getRoles() const;
    void setRoles(const QSet<QString> &roles);
    bool is_roles_Set() const;
    bool is_roles_Valid() const;

    bool isRepliedUser() const;
    void setRepliedUser(const bool &replied_user);
    bool is_replied_user_Set() const;
    bool is_replied_user_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QSet<QString> m_parse;
    bool m_parse_isSet;
    bool m_parse_isValid;

    QSet<QString> m_users;
    bool m_users_isSet;
    bool m_users_isValid;

    QSet<QString> m_roles;
    bool m_roles_isSet;
    bool m_roles_isValid;

    bool m_replied_user;
    bool m_replied_user_isSet;
    bool m_replied_user_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIMessageAllowedMentionsRequest)

#endif // OAIMessageAllowedMentionsRequest_H
