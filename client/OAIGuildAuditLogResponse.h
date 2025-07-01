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
 * OAIGuildAuditLogResponse.h
 *
 * 
 */

#ifndef OAIGuildAuditLogResponse_H
#define OAIGuildAuditLogResponse_H

#include <QJsonObject>

#include "OAIApplicationCommandResponse.h"
#include "OAIAuditLogEntryResponse.h"
#include "OAIGuildAuditLogResponse_integrations_inner.h"
#include "OAIList_auto_moderation_rules_200_response_inner.h"
#include "OAIList_channel_webhooks_200_response_inner.h"
#include "OAIList_guild_scheduled_events_200_response_inner.h"
#include "OAIThreadResponse.h"
#include "OAIUserResponse.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIAuditLogEntryResponse;
class OAIUserResponse;
class OAIGuildAuditLogResponse_integrations_inner;
class OAIList_channel_webhooks_200_response_inner;
class OAIList_guild_scheduled_events_200_response_inner;
class OAIThreadResponse;
class OAIApplicationCommandResponse;
class OAIList_auto_moderation_rules_200_response_inner;

class OAIGuildAuditLogResponse : public OAIObject {
public:
    OAIGuildAuditLogResponse();
    OAIGuildAuditLogResponse(QString json);
    ~OAIGuildAuditLogResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIAuditLogEntryResponse> getAuditLogEntries() const;
    void setAuditLogEntries(const QList<OAIAuditLogEntryResponse> &audit_log_entries);
    bool is_audit_log_entries_Set() const;
    bool is_audit_log_entries_Valid() const;

    QList<OAIUserResponse> getUsers() const;
    void setUsers(const QList<OAIUserResponse> &users);
    bool is_users_Set() const;
    bool is_users_Valid() const;

    QList<OAIGuildAuditLogResponse_integrations_inner> getIntegrations() const;
    void setIntegrations(const QList<OAIGuildAuditLogResponse_integrations_inner> &integrations);
    bool is_integrations_Set() const;
    bool is_integrations_Valid() const;

    QList<OAIList_channel_webhooks_200_response_inner> getWebhooks() const;
    void setWebhooks(const QList<OAIList_channel_webhooks_200_response_inner> &webhooks);
    bool is_webhooks_Set() const;
    bool is_webhooks_Valid() const;

    QList<OAIList_guild_scheduled_events_200_response_inner> getGuildScheduledEvents() const;
    void setGuildScheduledEvents(const QList<OAIList_guild_scheduled_events_200_response_inner> &guild_scheduled_events);
    bool is_guild_scheduled_events_Set() const;
    bool is_guild_scheduled_events_Valid() const;

    QList<OAIThreadResponse> getThreads() const;
    void setThreads(const QList<OAIThreadResponse> &threads);
    bool is_threads_Set() const;
    bool is_threads_Valid() const;

    QList<OAIApplicationCommandResponse> getApplicationCommands() const;
    void setApplicationCommands(const QList<OAIApplicationCommandResponse> &application_commands);
    bool is_application_commands_Set() const;
    bool is_application_commands_Valid() const;

    QList<OAIList_auto_moderation_rules_200_response_inner> getAutoModerationRules() const;
    void setAutoModerationRules(const QList<OAIList_auto_moderation_rules_200_response_inner> &auto_moderation_rules);
    bool is_auto_moderation_rules_Set() const;
    bool is_auto_moderation_rules_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIAuditLogEntryResponse> m_audit_log_entries;
    bool m_audit_log_entries_isSet;
    bool m_audit_log_entries_isValid;

    QList<OAIUserResponse> m_users;
    bool m_users_isSet;
    bool m_users_isValid;

    QList<OAIGuildAuditLogResponse_integrations_inner> m_integrations;
    bool m_integrations_isSet;
    bool m_integrations_isValid;

    QList<OAIList_channel_webhooks_200_response_inner> m_webhooks;
    bool m_webhooks_isSet;
    bool m_webhooks_isValid;

    QList<OAIList_guild_scheduled_events_200_response_inner> m_guild_scheduled_events;
    bool m_guild_scheduled_events_isSet;
    bool m_guild_scheduled_events_isValid;

    QList<OAIThreadResponse> m_threads;
    bool m_threads_isSet;
    bool m_threads_isValid;

    QList<OAIApplicationCommandResponse> m_application_commands;
    bool m_application_commands_isSet;
    bool m_application_commands_isValid;

    QList<OAIList_auto_moderation_rules_200_response_inner> m_auto_moderation_rules;
    bool m_auto_moderation_rules_isSet;
    bool m_auto_moderation_rules_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIGuildAuditLogResponse)

#endif // OAIGuildAuditLogResponse_H
