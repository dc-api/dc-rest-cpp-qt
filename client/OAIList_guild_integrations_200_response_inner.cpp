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

#include "OAIList_guild_integrations_200_response_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIList_guild_integrations_200_response_inner::OAIList_guild_integrations_200_response_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIList_guild_integrations_200_response_inner::OAIList_guild_integrations_200_response_inner() {
    this->initializeModel();
}

OAIList_guild_integrations_200_response_inner::~OAIList_guild_integrations_200_response_inner() {}

void OAIList_guild_integrations_200_response_inner::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_application_isSet = false;
    m_application_isValid = false;

    m_scopes_isSet = false;
    m_scopes_isValid = false;

    m_user_isSet = false;
    m_user_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_account_isSet = false;
    m_account_isValid = false;

    m_enabled_isSet = false;
    m_enabled_isValid = false;

    m_revoked_isSet = false;
    m_revoked_isValid = false;

    m_expire_behavior_isSet = false;
    m_expire_behavior_isValid = false;

    m_expire_grace_period_isSet = false;
    m_expire_grace_period_isValid = false;

    m_subscriber_count_isSet = false;
    m_subscriber_count_isValid = false;

    m_synced_at_isSet = false;
    m_synced_at_isValid = false;

    m_role_id_isSet = false;
    m_role_id_isValid = false;

    m_syncing_isSet = false;
    m_syncing_isValid = false;

    m_enable_emoticons_isSet = false;
    m_enable_emoticons_isValid = false;
}

void OAIList_guild_integrations_200_response_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIList_guild_integrations_200_response_inner::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_application_isValid = ::dc_rest::fromJsonValue(m_application, json[QString("application")]);
    m_application_isSet = !json[QString("application")].isNull() && m_application_isValid;

    m_scopes_isValid = ::dc_rest::fromJsonValue(m_scopes, json[QString("scopes")]);
    m_scopes_isSet = !json[QString("scopes")].isNull() && m_scopes_isValid;

    m_user_isValid = ::dc_rest::fromJsonValue(m_user, json[QString("user")]);
    m_user_isSet = !json[QString("user")].isNull() && m_user_isValid;

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_account_isValid = ::dc_rest::fromJsonValue(m_account, json[QString("account")]);
    m_account_isSet = !json[QString("account")].isNull() && m_account_isValid;

    m_enabled_isValid = ::dc_rest::fromJsonValue(m_enabled, json[QString("enabled")]);
    m_enabled_isSet = !json[QString("enabled")].isNull() && m_enabled_isValid;

    m_revoked_isValid = ::dc_rest::fromJsonValue(m_revoked, json[QString("revoked")]);
    m_revoked_isSet = !json[QString("revoked")].isNull() && m_revoked_isValid;

    m_expire_behavior_isValid = ::dc_rest::fromJsonValue(m_expire_behavior, json[QString("expire_behavior")]);
    m_expire_behavior_isSet = !json[QString("expire_behavior")].isNull() && m_expire_behavior_isValid;

    m_expire_grace_period_isValid = ::dc_rest::fromJsonValue(m_expire_grace_period, json[QString("expire_grace_period")]);
    m_expire_grace_period_isSet = !json[QString("expire_grace_period")].isNull() && m_expire_grace_period_isValid;

    m_subscriber_count_isValid = ::dc_rest::fromJsonValue(m_subscriber_count, json[QString("subscriber_count")]);
    m_subscriber_count_isSet = !json[QString("subscriber_count")].isNull() && m_subscriber_count_isValid;

    m_synced_at_isValid = ::dc_rest::fromJsonValue(m_synced_at, json[QString("synced_at")]);
    m_synced_at_isSet = !json[QString("synced_at")].isNull() && m_synced_at_isValid;

    m_role_id_isValid = ::dc_rest::fromJsonValue(m_role_id, json[QString("role_id")]);
    m_role_id_isSet = !json[QString("role_id")].isNull() && m_role_id_isValid;

    m_syncing_isValid = ::dc_rest::fromJsonValue(m_syncing, json[QString("syncing")]);
    m_syncing_isSet = !json[QString("syncing")].isNull() && m_syncing_isValid;

    m_enable_emoticons_isValid = ::dc_rest::fromJsonValue(m_enable_emoticons, json[QString("enable_emoticons")]);
    m_enable_emoticons_isSet = !json[QString("enable_emoticons")].isNull() && m_enable_emoticons_isValid;
}

QString OAIList_guild_integrations_200_response_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIList_guild_integrations_200_response_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_application.isSet()) {
        obj.insert(QString("application"), ::dc_rest::toJsonValue(m_application));
    }
    if (m_scopes.size() > 0) {
        obj.insert(QString("scopes"), ::dc_rest::toJsonValue(m_scopes));
    }
    if (m_user.isSet()) {
        obj.insert(QString("user"), ::dc_rest::toJsonValue(m_user));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_account.isSet()) {
        obj.insert(QString("account"), ::dc_rest::toJsonValue(m_account));
    }
    if (m_enabled_isSet) {
        obj.insert(QString("enabled"), ::dc_rest::toJsonValue(m_enabled));
    }
    if (m_revoked_isSet) {
        obj.insert(QString("revoked"), ::dc_rest::toJsonValue(m_revoked));
    }
    if (m_expire_behavior_isSet) {
        obj.insert(QString("expire_behavior"), ::dc_rest::toJsonValue(m_expire_behavior));
    }
    if (m_expire_grace_period_isSet) {
        obj.insert(QString("expire_grace_period"), ::dc_rest::toJsonValue(m_expire_grace_period));
    }
    if (m_subscriber_count_isSet) {
        obj.insert(QString("subscriber_count"), ::dc_rest::toJsonValue(m_subscriber_count));
    }
    if (m_synced_at_isSet) {
        obj.insert(QString("synced_at"), ::dc_rest::toJsonValue(m_synced_at));
    }
    if (m_role_id_isSet) {
        obj.insert(QString("role_id"), ::dc_rest::toJsonValue(m_role_id));
    }
    if (m_syncing_isSet) {
        obj.insert(QString("syncing"), ::dc_rest::toJsonValue(m_syncing));
    }
    if (m_enable_emoticons_isSet) {
        obj.insert(QString("enable_emoticons"), ::dc_rest::toJsonValue(m_enable_emoticons));
    }
    return obj;
}

QString OAIList_guild_integrations_200_response_inner::getType() const {
    return m_type;
}
void OAIList_guild_integrations_200_response_inner::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIList_guild_integrations_200_response_inner::is_type_Set() const{
    return m_type_isSet;
}

bool OAIList_guild_integrations_200_response_inner::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIList_guild_integrations_200_response_inner::getId() const {
    return m_id;
}
void OAIList_guild_integrations_200_response_inner::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIList_guild_integrations_200_response_inner::is_id_Set() const{
    return m_id_isSet;
}

bool OAIList_guild_integrations_200_response_inner::is_id_Valid() const{
    return m_id_isValid;
}

OAIIntegrationApplicationResponse OAIList_guild_integrations_200_response_inner::getApplication() const {
    return m_application;
}
void OAIList_guild_integrations_200_response_inner::setApplication(const OAIIntegrationApplicationResponse &application) {
    m_application = application;
    m_application_isSet = true;
}

bool OAIList_guild_integrations_200_response_inner::is_application_Set() const{
    return m_application_isSet;
}

bool OAIList_guild_integrations_200_response_inner::is_application_Valid() const{
    return m_application_isValid;
}

QSet<QString> OAIList_guild_integrations_200_response_inner::getScopes() const {
    return m_scopes;
}
void OAIList_guild_integrations_200_response_inner::setScopes(const QSet<QString> &scopes) {
    m_scopes = scopes;
    m_scopes_isSet = true;
}

bool OAIList_guild_integrations_200_response_inner::is_scopes_Set() const{
    return m_scopes_isSet;
}

bool OAIList_guild_integrations_200_response_inner::is_scopes_Valid() const{
    return m_scopes_isValid;
}

OAIUserResponse OAIList_guild_integrations_200_response_inner::getUser() const {
    return m_user;
}
void OAIList_guild_integrations_200_response_inner::setUser(const OAIUserResponse &user) {
    m_user = user;
    m_user_isSet = true;
}

bool OAIList_guild_integrations_200_response_inner::is_user_Set() const{
    return m_user_isSet;
}

bool OAIList_guild_integrations_200_response_inner::is_user_Valid() const{
    return m_user_isValid;
}

QString OAIList_guild_integrations_200_response_inner::getName() const {
    return m_name;
}
void OAIList_guild_integrations_200_response_inner::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIList_guild_integrations_200_response_inner::is_name_Set() const{
    return m_name_isSet;
}

bool OAIList_guild_integrations_200_response_inner::is_name_Valid() const{
    return m_name_isValid;
}

OAIAccountResponse OAIList_guild_integrations_200_response_inner::getAccount() const {
    return m_account;
}
void OAIList_guild_integrations_200_response_inner::setAccount(const OAIAccountResponse &account) {
    m_account = account;
    m_account_isSet = true;
}

bool OAIList_guild_integrations_200_response_inner::is_account_Set() const{
    return m_account_isSet;
}

bool OAIList_guild_integrations_200_response_inner::is_account_Valid() const{
    return m_account_isValid;
}

bool OAIList_guild_integrations_200_response_inner::isEnabled() const {
    return m_enabled;
}
void OAIList_guild_integrations_200_response_inner::setEnabled(const bool &enabled) {
    m_enabled = enabled;
    m_enabled_isSet = true;
}

bool OAIList_guild_integrations_200_response_inner::is_enabled_Set() const{
    return m_enabled_isSet;
}

bool OAIList_guild_integrations_200_response_inner::is_enabled_Valid() const{
    return m_enabled_isValid;
}

bool OAIList_guild_integrations_200_response_inner::isRevoked() const {
    return m_revoked;
}
void OAIList_guild_integrations_200_response_inner::setRevoked(const bool &revoked) {
    m_revoked = revoked;
    m_revoked_isSet = true;
}

bool OAIList_guild_integrations_200_response_inner::is_revoked_Set() const{
    return m_revoked_isSet;
}

bool OAIList_guild_integrations_200_response_inner::is_revoked_Valid() const{
    return m_revoked_isValid;
}

qint32 OAIList_guild_integrations_200_response_inner::getExpireBehavior() const {
    return m_expire_behavior;
}
void OAIList_guild_integrations_200_response_inner::setExpireBehavior(const qint32 &expire_behavior) {
    m_expire_behavior = expire_behavior;
    m_expire_behavior_isSet = true;
}

bool OAIList_guild_integrations_200_response_inner::is_expire_behavior_Set() const{
    return m_expire_behavior_isSet;
}

bool OAIList_guild_integrations_200_response_inner::is_expire_behavior_Valid() const{
    return m_expire_behavior_isValid;
}

qint32 OAIList_guild_integrations_200_response_inner::getExpireGracePeriod() const {
    return m_expire_grace_period;
}
void OAIList_guild_integrations_200_response_inner::setExpireGracePeriod(const qint32 &expire_grace_period) {
    m_expire_grace_period = expire_grace_period;
    m_expire_grace_period_isSet = true;
}

bool OAIList_guild_integrations_200_response_inner::is_expire_grace_period_Set() const{
    return m_expire_grace_period_isSet;
}

bool OAIList_guild_integrations_200_response_inner::is_expire_grace_period_Valid() const{
    return m_expire_grace_period_isValid;
}

qint32 OAIList_guild_integrations_200_response_inner::getSubscriberCount() const {
    return m_subscriber_count;
}
void OAIList_guild_integrations_200_response_inner::setSubscriberCount(const qint32 &subscriber_count) {
    m_subscriber_count = subscriber_count;
    m_subscriber_count_isSet = true;
}

bool OAIList_guild_integrations_200_response_inner::is_subscriber_count_Set() const{
    return m_subscriber_count_isSet;
}

bool OAIList_guild_integrations_200_response_inner::is_subscriber_count_Valid() const{
    return m_subscriber_count_isValid;
}

QDateTime OAIList_guild_integrations_200_response_inner::getSyncedAt() const {
    return m_synced_at;
}
void OAIList_guild_integrations_200_response_inner::setSyncedAt(const QDateTime &synced_at) {
    m_synced_at = synced_at;
    m_synced_at_isSet = true;
}

bool OAIList_guild_integrations_200_response_inner::is_synced_at_Set() const{
    return m_synced_at_isSet;
}

bool OAIList_guild_integrations_200_response_inner::is_synced_at_Valid() const{
    return m_synced_at_isValid;
}

QString OAIList_guild_integrations_200_response_inner::getRoleId() const {
    return m_role_id;
}
void OAIList_guild_integrations_200_response_inner::setRoleId(const QString &role_id) {
    m_role_id = role_id;
    m_role_id_isSet = true;
}

bool OAIList_guild_integrations_200_response_inner::is_role_id_Set() const{
    return m_role_id_isSet;
}

bool OAIList_guild_integrations_200_response_inner::is_role_id_Valid() const{
    return m_role_id_isValid;
}

bool OAIList_guild_integrations_200_response_inner::isSyncing() const {
    return m_syncing;
}
void OAIList_guild_integrations_200_response_inner::setSyncing(const bool &syncing) {
    m_syncing = syncing;
    m_syncing_isSet = true;
}

bool OAIList_guild_integrations_200_response_inner::is_syncing_Set() const{
    return m_syncing_isSet;
}

bool OAIList_guild_integrations_200_response_inner::is_syncing_Valid() const{
    return m_syncing_isValid;
}

bool OAIList_guild_integrations_200_response_inner::isEnableEmoticons() const {
    return m_enable_emoticons;
}
void OAIList_guild_integrations_200_response_inner::setEnableEmoticons(const bool &enable_emoticons) {
    m_enable_emoticons = enable_emoticons;
    m_enable_emoticons_isSet = true;
}

bool OAIList_guild_integrations_200_response_inner::is_enable_emoticons_Set() const{
    return m_enable_emoticons_isSet;
}

bool OAIList_guild_integrations_200_response_inner::is_enable_emoticons_Valid() const{
    return m_enable_emoticons_isValid;
}

bool OAIList_guild_integrations_200_response_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_application.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_scopes.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_account.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_enabled_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_revoked_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_expire_behavior_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_expire_grace_period_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_subscriber_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_synced_at_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_role_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_syncing_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_enable_emoticons_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIList_guild_integrations_200_response_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_id_isValid && m_application_isValid && m_scopes_isValid && m_user_isValid && true;
}

} // namespace dc_rest
