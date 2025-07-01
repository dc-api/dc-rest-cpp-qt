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

#include "OAIMLSpamRuleResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIMLSpamRuleResponse::OAIMLSpamRuleResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMLSpamRuleResponse::OAIMLSpamRuleResponse() {
    this->initializeModel();
}

OAIMLSpamRuleResponse::~OAIMLSpamRuleResponse() {}

void OAIMLSpamRuleResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_guild_id_isSet = false;
    m_guild_id_isValid = false;

    m_creator_id_isSet = false;
    m_creator_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_event_type_isSet = false;
    m_event_type_isValid = false;

    m_actions_isSet = false;
    m_actions_isValid = false;

    m_trigger_type_isSet = false;
    m_trigger_type_isValid = false;

    m_trigger_metadata_isSet = false;
    m_trigger_metadata_isValid = false;

    m_enabled_isSet = false;
    m_enabled_isValid = false;

    m_exempt_roles_isSet = false;
    m_exempt_roles_isValid = false;

    m_exempt_channels_isSet = false;
    m_exempt_channels_isValid = false;
}

void OAIMLSpamRuleResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMLSpamRuleResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_guild_id_isValid = ::dc_rest::fromJsonValue(m_guild_id, json[QString("guild_id")]);
    m_guild_id_isSet = !json[QString("guild_id")].isNull() && m_guild_id_isValid;

    m_creator_id_isValid = ::dc_rest::fromJsonValue(m_creator_id, json[QString("creator_id")]);
    m_creator_id_isSet = !json[QString("creator_id")].isNull() && m_creator_id_isValid;

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_event_type_isValid = ::dc_rest::fromJsonValue(m_event_type, json[QString("event_type")]);
    m_event_type_isSet = !json[QString("event_type")].isNull() && m_event_type_isValid;

    m_actions_isValid = ::dc_rest::fromJsonValue(m_actions, json[QString("actions")]);
    m_actions_isSet = !json[QString("actions")].isNull() && m_actions_isValid;

    m_trigger_type_isValid = ::dc_rest::fromJsonValue(m_trigger_type, json[QString("trigger_type")]);
    m_trigger_type_isSet = !json[QString("trigger_type")].isNull() && m_trigger_type_isValid;

    m_trigger_metadata_isValid = ::dc_rest::fromJsonValue(m_trigger_metadata, json[QString("trigger_metadata")]);
    m_trigger_metadata_isSet = !json[QString("trigger_metadata")].isNull() && m_trigger_metadata_isValid;

    m_enabled_isValid = ::dc_rest::fromJsonValue(m_enabled, json[QString("enabled")]);
    m_enabled_isSet = !json[QString("enabled")].isNull() && m_enabled_isValid;

    m_exempt_roles_isValid = ::dc_rest::fromJsonValue(m_exempt_roles, json[QString("exempt_roles")]);
    m_exempt_roles_isSet = !json[QString("exempt_roles")].isNull() && m_exempt_roles_isValid;

    m_exempt_channels_isValid = ::dc_rest::fromJsonValue(m_exempt_channels, json[QString("exempt_channels")]);
    m_exempt_channels_isSet = !json[QString("exempt_channels")].isNull() && m_exempt_channels_isValid;
}

QString OAIMLSpamRuleResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMLSpamRuleResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_guild_id_isSet) {
        obj.insert(QString("guild_id"), ::dc_rest::toJsonValue(m_guild_id));
    }
    if (m_creator_id_isSet) {
        obj.insert(QString("creator_id"), ::dc_rest::toJsonValue(m_creator_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_event_type_isSet) {
        obj.insert(QString("event_type"), ::dc_rest::toJsonValue(m_event_type));
    }
    if (m_actions.size() > 0) {
        obj.insert(QString("actions"), ::dc_rest::toJsonValue(m_actions));
    }
    if (m_trigger_type_isSet) {
        obj.insert(QString("trigger_type"), ::dc_rest::toJsonValue(m_trigger_type));
    }
    if (m_trigger_metadata_isSet) {
        obj.insert(QString("trigger_metadata"), ::dc_rest::toJsonValue(m_trigger_metadata));
    }
    if (m_enabled_isSet) {
        obj.insert(QString("enabled"), ::dc_rest::toJsonValue(m_enabled));
    }
    if (m_exempt_roles.size() > 0) {
        obj.insert(QString("exempt_roles"), ::dc_rest::toJsonValue(m_exempt_roles));
    }
    if (m_exempt_channels.size() > 0) {
        obj.insert(QString("exempt_channels"), ::dc_rest::toJsonValue(m_exempt_channels));
    }
    return obj;
}

QString OAIMLSpamRuleResponse::getId() const {
    return m_id;
}
void OAIMLSpamRuleResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIMLSpamRuleResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIMLSpamRuleResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIMLSpamRuleResponse::getGuildId() const {
    return m_guild_id;
}
void OAIMLSpamRuleResponse::setGuildId(const QString &guild_id) {
    m_guild_id = guild_id;
    m_guild_id_isSet = true;
}

bool OAIMLSpamRuleResponse::is_guild_id_Set() const{
    return m_guild_id_isSet;
}

bool OAIMLSpamRuleResponse::is_guild_id_Valid() const{
    return m_guild_id_isValid;
}

QString OAIMLSpamRuleResponse::getCreatorId() const {
    return m_creator_id;
}
void OAIMLSpamRuleResponse::setCreatorId(const QString &creator_id) {
    m_creator_id = creator_id;
    m_creator_id_isSet = true;
}

bool OAIMLSpamRuleResponse::is_creator_id_Set() const{
    return m_creator_id_isSet;
}

bool OAIMLSpamRuleResponse::is_creator_id_Valid() const{
    return m_creator_id_isValid;
}

QString OAIMLSpamRuleResponse::getName() const {
    return m_name;
}
void OAIMLSpamRuleResponse::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIMLSpamRuleResponse::is_name_Set() const{
    return m_name_isSet;
}

bool OAIMLSpamRuleResponse::is_name_Valid() const{
    return m_name_isValid;
}

qint32 OAIMLSpamRuleResponse::getEventType() const {
    return m_event_type;
}
void OAIMLSpamRuleResponse::setEventType(const qint32 &event_type) {
    m_event_type = event_type;
    m_event_type_isSet = true;
}

bool OAIMLSpamRuleResponse::is_event_type_Set() const{
    return m_event_type_isSet;
}

bool OAIMLSpamRuleResponse::is_event_type_Valid() const{
    return m_event_type_isValid;
}

QList<OAIDefaultKeywordRuleResponse_actions_inner> OAIMLSpamRuleResponse::getActions() const {
    return m_actions;
}
void OAIMLSpamRuleResponse::setActions(const QList<OAIDefaultKeywordRuleResponse_actions_inner> &actions) {
    m_actions = actions;
    m_actions_isSet = true;
}

bool OAIMLSpamRuleResponse::is_actions_Set() const{
    return m_actions_isSet;
}

bool OAIMLSpamRuleResponse::is_actions_Valid() const{
    return m_actions_isValid;
}

qint32 OAIMLSpamRuleResponse::getTriggerType() const {
    return m_trigger_type;
}
void OAIMLSpamRuleResponse::setTriggerType(const qint32 &trigger_type) {
    m_trigger_type = trigger_type;
    m_trigger_type_isSet = true;
}

bool OAIMLSpamRuleResponse::is_trigger_type_Set() const{
    return m_trigger_type_isSet;
}

bool OAIMLSpamRuleResponse::is_trigger_type_Valid() const{
    return m_trigger_type_isValid;
}

OAIObject OAIMLSpamRuleResponse::getTriggerMetadata() const {
    return m_trigger_metadata;
}
void OAIMLSpamRuleResponse::setTriggerMetadata(const OAIObject &trigger_metadata) {
    m_trigger_metadata = trigger_metadata;
    m_trigger_metadata_isSet = true;
}

bool OAIMLSpamRuleResponse::is_trigger_metadata_Set() const{
    return m_trigger_metadata_isSet;
}

bool OAIMLSpamRuleResponse::is_trigger_metadata_Valid() const{
    return m_trigger_metadata_isValid;
}

bool OAIMLSpamRuleResponse::isEnabled() const {
    return m_enabled;
}
void OAIMLSpamRuleResponse::setEnabled(const bool &enabled) {
    m_enabled = enabled;
    m_enabled_isSet = true;
}

bool OAIMLSpamRuleResponse::is_enabled_Set() const{
    return m_enabled_isSet;
}

bool OAIMLSpamRuleResponse::is_enabled_Valid() const{
    return m_enabled_isValid;
}

QSet<QString> OAIMLSpamRuleResponse::getExemptRoles() const {
    return m_exempt_roles;
}
void OAIMLSpamRuleResponse::setExemptRoles(const QSet<QString> &exempt_roles) {
    m_exempt_roles = exempt_roles;
    m_exempt_roles_isSet = true;
}

bool OAIMLSpamRuleResponse::is_exempt_roles_Set() const{
    return m_exempt_roles_isSet;
}

bool OAIMLSpamRuleResponse::is_exempt_roles_Valid() const{
    return m_exempt_roles_isValid;
}

QSet<QString> OAIMLSpamRuleResponse::getExemptChannels() const {
    return m_exempt_channels;
}
void OAIMLSpamRuleResponse::setExemptChannels(const QSet<QString> &exempt_channels) {
    m_exempt_channels = exempt_channels;
    m_exempt_channels_isSet = true;
}

bool OAIMLSpamRuleResponse::is_exempt_channels_Set() const{
    return m_exempt_channels_isSet;
}

bool OAIMLSpamRuleResponse::is_exempt_channels_Valid() const{
    return m_exempt_channels_isValid;
}

bool OAIMLSpamRuleResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_guild_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_creator_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_event_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_actions.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_trigger_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_trigger_metadata_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_enabled_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_exempt_roles.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_exempt_channels.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMLSpamRuleResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_guild_id_isValid && m_creator_id_isValid && m_name_isValid && m_event_type_isValid && m_actions_isValid && m_trigger_type_isValid && m_trigger_metadata_isValid && true;
}

} // namespace dc_rest
