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

#include "OAIGuildAuditLogResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIGuildAuditLogResponse::OAIGuildAuditLogResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGuildAuditLogResponse::OAIGuildAuditLogResponse() {
    this->initializeModel();
}

OAIGuildAuditLogResponse::~OAIGuildAuditLogResponse() {}

void OAIGuildAuditLogResponse::initializeModel() {

    m_audit_log_entries_isSet = false;
    m_audit_log_entries_isValid = false;

    m_users_isSet = false;
    m_users_isValid = false;

    m_integrations_isSet = false;
    m_integrations_isValid = false;

    m_webhooks_isSet = false;
    m_webhooks_isValid = false;

    m_guild_scheduled_events_isSet = false;
    m_guild_scheduled_events_isValid = false;

    m_threads_isSet = false;
    m_threads_isValid = false;

    m_application_commands_isSet = false;
    m_application_commands_isValid = false;

    m_auto_moderation_rules_isSet = false;
    m_auto_moderation_rules_isValid = false;
}

void OAIGuildAuditLogResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGuildAuditLogResponse::fromJsonObject(QJsonObject json) {

    m_audit_log_entries_isValid = ::dc_rest::fromJsonValue(m_audit_log_entries, json[QString("audit_log_entries")]);
    m_audit_log_entries_isSet = !json[QString("audit_log_entries")].isNull() && m_audit_log_entries_isValid;

    m_users_isValid = ::dc_rest::fromJsonValue(m_users, json[QString("users")]);
    m_users_isSet = !json[QString("users")].isNull() && m_users_isValid;

    m_integrations_isValid = ::dc_rest::fromJsonValue(m_integrations, json[QString("integrations")]);
    m_integrations_isSet = !json[QString("integrations")].isNull() && m_integrations_isValid;

    m_webhooks_isValid = ::dc_rest::fromJsonValue(m_webhooks, json[QString("webhooks")]);
    m_webhooks_isSet = !json[QString("webhooks")].isNull() && m_webhooks_isValid;

    m_guild_scheduled_events_isValid = ::dc_rest::fromJsonValue(m_guild_scheduled_events, json[QString("guild_scheduled_events")]);
    m_guild_scheduled_events_isSet = !json[QString("guild_scheduled_events")].isNull() && m_guild_scheduled_events_isValid;

    m_threads_isValid = ::dc_rest::fromJsonValue(m_threads, json[QString("threads")]);
    m_threads_isSet = !json[QString("threads")].isNull() && m_threads_isValid;

    m_application_commands_isValid = ::dc_rest::fromJsonValue(m_application_commands, json[QString("application_commands")]);
    m_application_commands_isSet = !json[QString("application_commands")].isNull() && m_application_commands_isValid;

    m_auto_moderation_rules_isValid = ::dc_rest::fromJsonValue(m_auto_moderation_rules, json[QString("auto_moderation_rules")]);
    m_auto_moderation_rules_isSet = !json[QString("auto_moderation_rules")].isNull() && m_auto_moderation_rules_isValid;
}

QString OAIGuildAuditLogResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGuildAuditLogResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_audit_log_entries.size() > 0) {
        obj.insert(QString("audit_log_entries"), ::dc_rest::toJsonValue(m_audit_log_entries));
    }
    if (m_users.size() > 0) {
        obj.insert(QString("users"), ::dc_rest::toJsonValue(m_users));
    }
    if (m_integrations.size() > 0) {
        obj.insert(QString("integrations"), ::dc_rest::toJsonValue(m_integrations));
    }
    if (m_webhooks.size() > 0) {
        obj.insert(QString("webhooks"), ::dc_rest::toJsonValue(m_webhooks));
    }
    if (m_guild_scheduled_events.size() > 0) {
        obj.insert(QString("guild_scheduled_events"), ::dc_rest::toJsonValue(m_guild_scheduled_events));
    }
    if (m_threads.size() > 0) {
        obj.insert(QString("threads"), ::dc_rest::toJsonValue(m_threads));
    }
    if (m_application_commands.size() > 0) {
        obj.insert(QString("application_commands"), ::dc_rest::toJsonValue(m_application_commands));
    }
    if (m_auto_moderation_rules.size() > 0) {
        obj.insert(QString("auto_moderation_rules"), ::dc_rest::toJsonValue(m_auto_moderation_rules));
    }
    return obj;
}

QList<OAIAuditLogEntryResponse> OAIGuildAuditLogResponse::getAuditLogEntries() const {
    return m_audit_log_entries;
}
void OAIGuildAuditLogResponse::setAuditLogEntries(const QList<OAIAuditLogEntryResponse> &audit_log_entries) {
    m_audit_log_entries = audit_log_entries;
    m_audit_log_entries_isSet = true;
}

bool OAIGuildAuditLogResponse::is_audit_log_entries_Set() const{
    return m_audit_log_entries_isSet;
}

bool OAIGuildAuditLogResponse::is_audit_log_entries_Valid() const{
    return m_audit_log_entries_isValid;
}

QList<OAIUserResponse> OAIGuildAuditLogResponse::getUsers() const {
    return m_users;
}
void OAIGuildAuditLogResponse::setUsers(const QList<OAIUserResponse> &users) {
    m_users = users;
    m_users_isSet = true;
}

bool OAIGuildAuditLogResponse::is_users_Set() const{
    return m_users_isSet;
}

bool OAIGuildAuditLogResponse::is_users_Valid() const{
    return m_users_isValid;
}

QList<OAIGuildAuditLogResponse_integrations_inner> OAIGuildAuditLogResponse::getIntegrations() const {
    return m_integrations;
}
void OAIGuildAuditLogResponse::setIntegrations(const QList<OAIGuildAuditLogResponse_integrations_inner> &integrations) {
    m_integrations = integrations;
    m_integrations_isSet = true;
}

bool OAIGuildAuditLogResponse::is_integrations_Set() const{
    return m_integrations_isSet;
}

bool OAIGuildAuditLogResponse::is_integrations_Valid() const{
    return m_integrations_isValid;
}

QList<OAIList_channel_webhooks_200_response_inner> OAIGuildAuditLogResponse::getWebhooks() const {
    return m_webhooks;
}
void OAIGuildAuditLogResponse::setWebhooks(const QList<OAIList_channel_webhooks_200_response_inner> &webhooks) {
    m_webhooks = webhooks;
    m_webhooks_isSet = true;
}

bool OAIGuildAuditLogResponse::is_webhooks_Set() const{
    return m_webhooks_isSet;
}

bool OAIGuildAuditLogResponse::is_webhooks_Valid() const{
    return m_webhooks_isValid;
}

QList<OAIList_guild_scheduled_events_200_response_inner> OAIGuildAuditLogResponse::getGuildScheduledEvents() const {
    return m_guild_scheduled_events;
}
void OAIGuildAuditLogResponse::setGuildScheduledEvents(const QList<OAIList_guild_scheduled_events_200_response_inner> &guild_scheduled_events) {
    m_guild_scheduled_events = guild_scheduled_events;
    m_guild_scheduled_events_isSet = true;
}

bool OAIGuildAuditLogResponse::is_guild_scheduled_events_Set() const{
    return m_guild_scheduled_events_isSet;
}

bool OAIGuildAuditLogResponse::is_guild_scheduled_events_Valid() const{
    return m_guild_scheduled_events_isValid;
}

QList<OAIThreadResponse> OAIGuildAuditLogResponse::getThreads() const {
    return m_threads;
}
void OAIGuildAuditLogResponse::setThreads(const QList<OAIThreadResponse> &threads) {
    m_threads = threads;
    m_threads_isSet = true;
}

bool OAIGuildAuditLogResponse::is_threads_Set() const{
    return m_threads_isSet;
}

bool OAIGuildAuditLogResponse::is_threads_Valid() const{
    return m_threads_isValid;
}

QList<OAIApplicationCommandResponse> OAIGuildAuditLogResponse::getApplicationCommands() const {
    return m_application_commands;
}
void OAIGuildAuditLogResponse::setApplicationCommands(const QList<OAIApplicationCommandResponse> &application_commands) {
    m_application_commands = application_commands;
    m_application_commands_isSet = true;
}

bool OAIGuildAuditLogResponse::is_application_commands_Set() const{
    return m_application_commands_isSet;
}

bool OAIGuildAuditLogResponse::is_application_commands_Valid() const{
    return m_application_commands_isValid;
}

QList<OAIList_auto_moderation_rules_200_response_inner> OAIGuildAuditLogResponse::getAutoModerationRules() const {
    return m_auto_moderation_rules;
}
void OAIGuildAuditLogResponse::setAutoModerationRules(const QList<OAIList_auto_moderation_rules_200_response_inner> &auto_moderation_rules) {
    m_auto_moderation_rules = auto_moderation_rules;
    m_auto_moderation_rules_isSet = true;
}

bool OAIGuildAuditLogResponse::is_auto_moderation_rules_Set() const{
    return m_auto_moderation_rules_isSet;
}

bool OAIGuildAuditLogResponse::is_auto_moderation_rules_Valid() const{
    return m_auto_moderation_rules_isValid;
}

bool OAIGuildAuditLogResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_audit_log_entries.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_users.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_integrations.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_webhooks.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_guild_scheduled_events.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_threads.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_application_commands.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_auto_moderation_rules.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGuildAuditLogResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_audit_log_entries_isValid && m_users_isValid && m_integrations_isValid && m_webhooks_isValid && m_guild_scheduled_events_isValid && m_threads_isValid && m_application_commands_isValid && m_auto_moderation_rules_isValid && true;
}

} // namespace dc_rest
