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

#include "OAIStageInstanceResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIStageInstanceResponse::OAIStageInstanceResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIStageInstanceResponse::OAIStageInstanceResponse() {
    this->initializeModel();
}

OAIStageInstanceResponse::~OAIStageInstanceResponse() {}

void OAIStageInstanceResponse::initializeModel() {

    m_guild_id_isSet = false;
    m_guild_id_isValid = false;

    m_channel_id_isSet = false;
    m_channel_id_isValid = false;

    m_topic_isSet = false;
    m_topic_isValid = false;

    m_privacy_level_isSet = false;
    m_privacy_level_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_discoverable_disabled_isSet = false;
    m_discoverable_disabled_isValid = false;

    m_guild_scheduled_event_id_isSet = false;
    m_guild_scheduled_event_id_isValid = false;
}

void OAIStageInstanceResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIStageInstanceResponse::fromJsonObject(QJsonObject json) {

    m_guild_id_isValid = ::dc_rest::fromJsonValue(m_guild_id, json[QString("guild_id")]);
    m_guild_id_isSet = !json[QString("guild_id")].isNull() && m_guild_id_isValid;

    m_channel_id_isValid = ::dc_rest::fromJsonValue(m_channel_id, json[QString("channel_id")]);
    m_channel_id_isSet = !json[QString("channel_id")].isNull() && m_channel_id_isValid;

    m_topic_isValid = ::dc_rest::fromJsonValue(m_topic, json[QString("topic")]);
    m_topic_isSet = !json[QString("topic")].isNull() && m_topic_isValid;

    m_privacy_level_isValid = ::dc_rest::fromJsonValue(m_privacy_level, json[QString("privacy_level")]);
    m_privacy_level_isSet = !json[QString("privacy_level")].isNull() && m_privacy_level_isValid;

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_discoverable_disabled_isValid = ::dc_rest::fromJsonValue(m_discoverable_disabled, json[QString("discoverable_disabled")]);
    m_discoverable_disabled_isSet = !json[QString("discoverable_disabled")].isNull() && m_discoverable_disabled_isValid;

    m_guild_scheduled_event_id_isValid = ::dc_rest::fromJsonValue(m_guild_scheduled_event_id, json[QString("guild_scheduled_event_id")]);
    m_guild_scheduled_event_id_isSet = !json[QString("guild_scheduled_event_id")].isNull() && m_guild_scheduled_event_id_isValid;
}

QString OAIStageInstanceResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIStageInstanceResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_guild_id_isSet) {
        obj.insert(QString("guild_id"), ::dc_rest::toJsonValue(m_guild_id));
    }
    if (m_channel_id_isSet) {
        obj.insert(QString("channel_id"), ::dc_rest::toJsonValue(m_channel_id));
    }
    if (m_topic_isSet) {
        obj.insert(QString("topic"), ::dc_rest::toJsonValue(m_topic));
    }
    if (m_privacy_level_isSet) {
        obj.insert(QString("privacy_level"), ::dc_rest::toJsonValue(m_privacy_level));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_discoverable_disabled_isSet) {
        obj.insert(QString("discoverable_disabled"), ::dc_rest::toJsonValue(m_discoverable_disabled));
    }
    if (m_guild_scheduled_event_id_isSet) {
        obj.insert(QString("guild_scheduled_event_id"), ::dc_rest::toJsonValue(m_guild_scheduled_event_id));
    }
    return obj;
}

QString OAIStageInstanceResponse::getGuildId() const {
    return m_guild_id;
}
void OAIStageInstanceResponse::setGuildId(const QString &guild_id) {
    m_guild_id = guild_id;
    m_guild_id_isSet = true;
}

bool OAIStageInstanceResponse::is_guild_id_Set() const{
    return m_guild_id_isSet;
}

bool OAIStageInstanceResponse::is_guild_id_Valid() const{
    return m_guild_id_isValid;
}

QString OAIStageInstanceResponse::getChannelId() const {
    return m_channel_id;
}
void OAIStageInstanceResponse::setChannelId(const QString &channel_id) {
    m_channel_id = channel_id;
    m_channel_id_isSet = true;
}

bool OAIStageInstanceResponse::is_channel_id_Set() const{
    return m_channel_id_isSet;
}

bool OAIStageInstanceResponse::is_channel_id_Valid() const{
    return m_channel_id_isValid;
}

QString OAIStageInstanceResponse::getTopic() const {
    return m_topic;
}
void OAIStageInstanceResponse::setTopic(const QString &topic) {
    m_topic = topic;
    m_topic_isSet = true;
}

bool OAIStageInstanceResponse::is_topic_Set() const{
    return m_topic_isSet;
}

bool OAIStageInstanceResponse::is_topic_Valid() const{
    return m_topic_isValid;
}

qint32 OAIStageInstanceResponse::getPrivacyLevel() const {
    return m_privacy_level;
}
void OAIStageInstanceResponse::setPrivacyLevel(const qint32 &privacy_level) {
    m_privacy_level = privacy_level;
    m_privacy_level_isSet = true;
}

bool OAIStageInstanceResponse::is_privacy_level_Set() const{
    return m_privacy_level_isSet;
}

bool OAIStageInstanceResponse::is_privacy_level_Valid() const{
    return m_privacy_level_isValid;
}

QString OAIStageInstanceResponse::getId() const {
    return m_id;
}
void OAIStageInstanceResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIStageInstanceResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIStageInstanceResponse::is_id_Valid() const{
    return m_id_isValid;
}

bool OAIStageInstanceResponse::isDiscoverableDisabled() const {
    return m_discoverable_disabled;
}
void OAIStageInstanceResponse::setDiscoverableDisabled(const bool &discoverable_disabled) {
    m_discoverable_disabled = discoverable_disabled;
    m_discoverable_disabled_isSet = true;
}

bool OAIStageInstanceResponse::is_discoverable_disabled_Set() const{
    return m_discoverable_disabled_isSet;
}

bool OAIStageInstanceResponse::is_discoverable_disabled_Valid() const{
    return m_discoverable_disabled_isValid;
}

QString OAIStageInstanceResponse::getGuildScheduledEventId() const {
    return m_guild_scheduled_event_id;
}
void OAIStageInstanceResponse::setGuildScheduledEventId(const QString &guild_scheduled_event_id) {
    m_guild_scheduled_event_id = guild_scheduled_event_id;
    m_guild_scheduled_event_id_isSet = true;
}

bool OAIStageInstanceResponse::is_guild_scheduled_event_id_Set() const{
    return m_guild_scheduled_event_id_isSet;
}

bool OAIStageInstanceResponse::is_guild_scheduled_event_id_Valid() const{
    return m_guild_scheduled_event_id_isValid;
}

bool OAIStageInstanceResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_guild_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_channel_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_topic_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_privacy_level_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_discoverable_disabled_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_guild_scheduled_event_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIStageInstanceResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_guild_id_isValid && m_channel_id_isValid && m_topic_isValid && m_privacy_level_isValid && m_id_isValid && true;
}

} // namespace dc_rest
