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
 * OAIList_guild_integrations_200_response_inner.h
 *
 * 
 */

#ifndef OAIList_guild_integrations_200_response_inner_H
#define OAIList_guild_integrations_200_response_inner_H

#include <QJsonObject>

#include "OAIAccountResponse.h"
#include "OAIDiscordIntegrationResponse.h"
#include "OAIExternalConnectionIntegrationResponse.h"
#include "OAIGuildSubscriptionIntegrationResponse.h"
#include "OAIIntegrationApplicationResponse.h"
#include "OAIUserResponse.h"
#include <QDateTime>
#include <QSet>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIIntegrationApplicationResponse;
class OAIUserResponse;
class OAIAccountResponse;

class OAIList_guild_integrations_200_response_inner : public OAIObject {
public:
    OAIList_guild_integrations_200_response_inner();
    OAIList_guild_integrations_200_response_inner(QString json);
    ~OAIList_guild_integrations_200_response_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    OAIIntegrationApplicationResponse getApplication() const;
    void setApplication(const OAIIntegrationApplicationResponse &application);
    bool is_application_Set() const;
    bool is_application_Valid() const;

    QSet<QString> getScopes() const;
    void setScopes(const QSet<QString> &scopes);
    bool is_scopes_Set() const;
    bool is_scopes_Valid() const;

    OAIUserResponse getUser() const;
    void setUser(const OAIUserResponse &user);
    bool is_user_Set() const;
    bool is_user_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    OAIAccountResponse getAccount() const;
    void setAccount(const OAIAccountResponse &account);
    bool is_account_Set() const;
    bool is_account_Valid() const;

    bool isEnabled() const;
    void setEnabled(const bool &enabled);
    bool is_enabled_Set() const;
    bool is_enabled_Valid() const;

    bool isRevoked() const;
    void setRevoked(const bool &revoked);
    bool is_revoked_Set() const;
    bool is_revoked_Valid() const;

    qint32 getExpireBehavior() const;
    void setExpireBehavior(const qint32 &expire_behavior);
    bool is_expire_behavior_Set() const;
    bool is_expire_behavior_Valid() const;

    qint32 getExpireGracePeriod() const;
    void setExpireGracePeriod(const qint32 &expire_grace_period);
    bool is_expire_grace_period_Set() const;
    bool is_expire_grace_period_Valid() const;

    qint32 getSubscriberCount() const;
    void setSubscriberCount(const qint32 &subscriber_count);
    bool is_subscriber_count_Set() const;
    bool is_subscriber_count_Valid() const;

    QDateTime getSyncedAt() const;
    void setSyncedAt(const QDateTime &synced_at);
    bool is_synced_at_Set() const;
    bool is_synced_at_Valid() const;

    QString getRoleId() const;
    void setRoleId(const QString &role_id);
    bool is_role_id_Set() const;
    bool is_role_id_Valid() const;

    bool isSyncing() const;
    void setSyncing(const bool &syncing);
    bool is_syncing_Set() const;
    bool is_syncing_Valid() const;

    bool isEnableEmoticons() const;
    void setEnableEmoticons(const bool &enable_emoticons);
    bool is_enable_emoticons_Set() const;
    bool is_enable_emoticons_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    OAIIntegrationApplicationResponse m_application;
    bool m_application_isSet;
    bool m_application_isValid;

    QSet<QString> m_scopes;
    bool m_scopes_isSet;
    bool m_scopes_isValid;

    OAIUserResponse m_user;
    bool m_user_isSet;
    bool m_user_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    OAIAccountResponse m_account;
    bool m_account_isSet;
    bool m_account_isValid;

    bool m_enabled;
    bool m_enabled_isSet;
    bool m_enabled_isValid;

    bool m_revoked;
    bool m_revoked_isSet;
    bool m_revoked_isValid;

    qint32 m_expire_behavior;
    bool m_expire_behavior_isSet;
    bool m_expire_behavior_isValid;

    qint32 m_expire_grace_period;
    bool m_expire_grace_period_isSet;
    bool m_expire_grace_period_isValid;

    qint32 m_subscriber_count;
    bool m_subscriber_count_isSet;
    bool m_subscriber_count_isValid;

    QDateTime m_synced_at;
    bool m_synced_at_isSet;
    bool m_synced_at_isValid;

    QString m_role_id;
    bool m_role_id_isSet;
    bool m_role_id_isValid;

    bool m_syncing;
    bool m_syncing_isSet;
    bool m_syncing_isValid;

    bool m_enable_emoticons;
    bool m_enable_emoticons_isSet;
    bool m_enable_emoticons_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIList_guild_integrations_200_response_inner)

#endif // OAIList_guild_integrations_200_response_inner_H
