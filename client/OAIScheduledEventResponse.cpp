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

#include "OAIScheduledEventResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIScheduledEventResponse::OAIScheduledEventResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIScheduledEventResponse::OAIScheduledEventResponse() {
    this->initializeModel();
}

OAIScheduledEventResponse::~OAIScheduledEventResponse() {}

void OAIScheduledEventResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_guild_id_isSet = false;
    m_guild_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_scheduled_start_time_isSet = false;
    m_scheduled_start_time_isValid = false;

    m_status_isSet = false;
    m_status_isValid = false;

    m_entity_type_isSet = false;
    m_entity_type_isValid = false;

    m_privacy_level_isSet = false;
    m_privacy_level_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_channel_id_isSet = false;
    m_channel_id_isValid = false;

    m_creator_id_isSet = false;
    m_creator_id_isValid = false;

    m_creator_isSet = false;
    m_creator_isValid = false;

    m_image_isSet = false;
    m_image_isValid = false;

    m_scheduled_end_time_isSet = false;
    m_scheduled_end_time_isValid = false;

    m_entity_id_isSet = false;
    m_entity_id_isValid = false;

    m_user_count_isSet = false;
    m_user_count_isValid = false;

    m_user_rsvp_isSet = false;
    m_user_rsvp_isValid = false;
}

void OAIScheduledEventResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIScheduledEventResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_guild_id_isValid = ::dc_rest::fromJsonValue(m_guild_id, json[QString("guild_id")]);
    m_guild_id_isSet = !json[QString("guild_id")].isNull() && m_guild_id_isValid;

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_scheduled_start_time_isValid = ::dc_rest::fromJsonValue(m_scheduled_start_time, json[QString("scheduled_start_time")]);
    m_scheduled_start_time_isSet = !json[QString("scheduled_start_time")].isNull() && m_scheduled_start_time_isValid;

    m_status_isValid = ::dc_rest::fromJsonValue(m_status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    m_entity_type_isValid = ::dc_rest::fromJsonValue(m_entity_type, json[QString("entity_type")]);
    m_entity_type_isSet = !json[QString("entity_type")].isNull() && m_entity_type_isValid;

    m_privacy_level_isValid = ::dc_rest::fromJsonValue(m_privacy_level, json[QString("privacy_level")]);
    m_privacy_level_isSet = !json[QString("privacy_level")].isNull() && m_privacy_level_isValid;

    m_description_isValid = ::dc_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_channel_id_isValid = ::dc_rest::fromJsonValue(m_channel_id, json[QString("channel_id")]);
    m_channel_id_isSet = !json[QString("channel_id")].isNull() && m_channel_id_isValid;

    m_creator_id_isValid = ::dc_rest::fromJsonValue(m_creator_id, json[QString("creator_id")]);
    m_creator_id_isSet = !json[QString("creator_id")].isNull() && m_creator_id_isValid;

    m_creator_isValid = ::dc_rest::fromJsonValue(m_creator, json[QString("creator")]);
    m_creator_isSet = !json[QString("creator")].isNull() && m_creator_isValid;

    m_image_isValid = ::dc_rest::fromJsonValue(m_image, json[QString("image")]);
    m_image_isSet = !json[QString("image")].isNull() && m_image_isValid;

    m_scheduled_end_time_isValid = ::dc_rest::fromJsonValue(m_scheduled_end_time, json[QString("scheduled_end_time")]);
    m_scheduled_end_time_isSet = !json[QString("scheduled_end_time")].isNull() && m_scheduled_end_time_isValid;

    m_entity_id_isValid = ::dc_rest::fromJsonValue(m_entity_id, json[QString("entity_id")]);
    m_entity_id_isSet = !json[QString("entity_id")].isNull() && m_entity_id_isValid;

    m_user_count_isValid = ::dc_rest::fromJsonValue(m_user_count, json[QString("user_count")]);
    m_user_count_isSet = !json[QString("user_count")].isNull() && m_user_count_isValid;

    m_user_rsvp_isValid = ::dc_rest::fromJsonValue(m_user_rsvp, json[QString("user_rsvp")]);
    m_user_rsvp_isSet = !json[QString("user_rsvp")].isNull() && m_user_rsvp_isValid;
}

QString OAIScheduledEventResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIScheduledEventResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_guild_id_isSet) {
        obj.insert(QString("guild_id"), ::dc_rest::toJsonValue(m_guild_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_scheduled_start_time_isSet) {
        obj.insert(QString("scheduled_start_time"), ::dc_rest::toJsonValue(m_scheduled_start_time));
    }
    if (m_status_isSet) {
        obj.insert(QString("status"), ::dc_rest::toJsonValue(m_status));
    }
    if (m_entity_type_isSet) {
        obj.insert(QString("entity_type"), ::dc_rest::toJsonValue(m_entity_type));
    }
    if (m_privacy_level_isSet) {
        obj.insert(QString("privacy_level"), ::dc_rest::toJsonValue(m_privacy_level));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::dc_rest::toJsonValue(m_description));
    }
    if (m_channel_id_isSet) {
        obj.insert(QString("channel_id"), ::dc_rest::toJsonValue(m_channel_id));
    }
    if (m_creator_id_isSet) {
        obj.insert(QString("creator_id"), ::dc_rest::toJsonValue(m_creator_id));
    }
    if (m_creator.isSet()) {
        obj.insert(QString("creator"), ::dc_rest::toJsonValue(m_creator));
    }
    if (m_image_isSet) {
        obj.insert(QString("image"), ::dc_rest::toJsonValue(m_image));
    }
    if (m_scheduled_end_time_isSet) {
        obj.insert(QString("scheduled_end_time"), ::dc_rest::toJsonValue(m_scheduled_end_time));
    }
    if (m_entity_id_isSet) {
        obj.insert(QString("entity_id"), ::dc_rest::toJsonValue(m_entity_id));
    }
    if (m_user_count_isSet) {
        obj.insert(QString("user_count"), ::dc_rest::toJsonValue(m_user_count));
    }
    if (m_user_rsvp.isSet()) {
        obj.insert(QString("user_rsvp"), ::dc_rest::toJsonValue(m_user_rsvp));
    }
    return obj;
}

QString OAIScheduledEventResponse::getId() const {
    return m_id;
}
void OAIScheduledEventResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIScheduledEventResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIScheduledEventResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIScheduledEventResponse::getGuildId() const {
    return m_guild_id;
}
void OAIScheduledEventResponse::setGuildId(const QString &guild_id) {
    m_guild_id = guild_id;
    m_guild_id_isSet = true;
}

bool OAIScheduledEventResponse::is_guild_id_Set() const{
    return m_guild_id_isSet;
}

bool OAIScheduledEventResponse::is_guild_id_Valid() const{
    return m_guild_id_isValid;
}

QString OAIScheduledEventResponse::getName() const {
    return m_name;
}
void OAIScheduledEventResponse::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIScheduledEventResponse::is_name_Set() const{
    return m_name_isSet;
}

bool OAIScheduledEventResponse::is_name_Valid() const{
    return m_name_isValid;
}

QDateTime OAIScheduledEventResponse::getScheduledStartTime() const {
    return m_scheduled_start_time;
}
void OAIScheduledEventResponse::setScheduledStartTime(const QDateTime &scheduled_start_time) {
    m_scheduled_start_time = scheduled_start_time;
    m_scheduled_start_time_isSet = true;
}

bool OAIScheduledEventResponse::is_scheduled_start_time_Set() const{
    return m_scheduled_start_time_isSet;
}

bool OAIScheduledEventResponse::is_scheduled_start_time_Valid() const{
    return m_scheduled_start_time_isValid;
}

qint32 OAIScheduledEventResponse::getStatus() const {
    return m_status;
}
void OAIScheduledEventResponse::setStatus(const qint32 &status) {
    m_status = status;
    m_status_isSet = true;
}

bool OAIScheduledEventResponse::is_status_Set() const{
    return m_status_isSet;
}

bool OAIScheduledEventResponse::is_status_Valid() const{
    return m_status_isValid;
}

qint32 OAIScheduledEventResponse::getEntityType() const {
    return m_entity_type;
}
void OAIScheduledEventResponse::setEntityType(const qint32 &entity_type) {
    m_entity_type = entity_type;
    m_entity_type_isSet = true;
}

bool OAIScheduledEventResponse::is_entity_type_Set() const{
    return m_entity_type_isSet;
}

bool OAIScheduledEventResponse::is_entity_type_Valid() const{
    return m_entity_type_isValid;
}

QJsonValue OAIScheduledEventResponse::getPrivacyLevel() const {
    return m_privacy_level;
}
void OAIScheduledEventResponse::setPrivacyLevel(const QJsonValue &privacy_level) {
    m_privacy_level = privacy_level;
    m_privacy_level_isSet = true;
}

bool OAIScheduledEventResponse::is_privacy_level_Set() const{
    return m_privacy_level_isSet;
}

bool OAIScheduledEventResponse::is_privacy_level_Valid() const{
    return m_privacy_level_isValid;
}

QString OAIScheduledEventResponse::getDescription() const {
    return m_description;
}
void OAIScheduledEventResponse::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIScheduledEventResponse::is_description_Set() const{
    return m_description_isSet;
}

bool OAIScheduledEventResponse::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIScheduledEventResponse::getChannelId() const {
    return m_channel_id;
}
void OAIScheduledEventResponse::setChannelId(const QString &channel_id) {
    m_channel_id = channel_id;
    m_channel_id_isSet = true;
}

bool OAIScheduledEventResponse::is_channel_id_Set() const{
    return m_channel_id_isSet;
}

bool OAIScheduledEventResponse::is_channel_id_Valid() const{
    return m_channel_id_isValid;
}

QString OAIScheduledEventResponse::getCreatorId() const {
    return m_creator_id;
}
void OAIScheduledEventResponse::setCreatorId(const QString &creator_id) {
    m_creator_id = creator_id;
    m_creator_id_isSet = true;
}

bool OAIScheduledEventResponse::is_creator_id_Set() const{
    return m_creator_id_isSet;
}

bool OAIScheduledEventResponse::is_creator_id_Valid() const{
    return m_creator_id_isValid;
}

OAIUserResponse OAIScheduledEventResponse::getCreator() const {
    return m_creator;
}
void OAIScheduledEventResponse::setCreator(const OAIUserResponse &creator) {
    m_creator = creator;
    m_creator_isSet = true;
}

bool OAIScheduledEventResponse::is_creator_Set() const{
    return m_creator_isSet;
}

bool OAIScheduledEventResponse::is_creator_Valid() const{
    return m_creator_isValid;
}

QString OAIScheduledEventResponse::getImage() const {
    return m_image;
}
void OAIScheduledEventResponse::setImage(const QString &image) {
    m_image = image;
    m_image_isSet = true;
}

bool OAIScheduledEventResponse::is_image_Set() const{
    return m_image_isSet;
}

bool OAIScheduledEventResponse::is_image_Valid() const{
    return m_image_isValid;
}

QDateTime OAIScheduledEventResponse::getScheduledEndTime() const {
    return m_scheduled_end_time;
}
void OAIScheduledEventResponse::setScheduledEndTime(const QDateTime &scheduled_end_time) {
    m_scheduled_end_time = scheduled_end_time;
    m_scheduled_end_time_isSet = true;
}

bool OAIScheduledEventResponse::is_scheduled_end_time_Set() const{
    return m_scheduled_end_time_isSet;
}

bool OAIScheduledEventResponse::is_scheduled_end_time_Valid() const{
    return m_scheduled_end_time_isValid;
}

QString OAIScheduledEventResponse::getEntityId() const {
    return m_entity_id;
}
void OAIScheduledEventResponse::setEntityId(const QString &entity_id) {
    m_entity_id = entity_id;
    m_entity_id_isSet = true;
}

bool OAIScheduledEventResponse::is_entity_id_Set() const{
    return m_entity_id_isSet;
}

bool OAIScheduledEventResponse::is_entity_id_Valid() const{
    return m_entity_id_isValid;
}

qint32 OAIScheduledEventResponse::getUserCount() const {
    return m_user_count;
}
void OAIScheduledEventResponse::setUserCount(const qint32 &user_count) {
    m_user_count = user_count;
    m_user_count_isSet = true;
}

bool OAIScheduledEventResponse::is_user_count_Set() const{
    return m_user_count_isSet;
}

bool OAIScheduledEventResponse::is_user_count_Valid() const{
    return m_user_count_isValid;
}

OAIScheduledEventUserResponse OAIScheduledEventResponse::getUserRsvp() const {
    return m_user_rsvp;
}
void OAIScheduledEventResponse::setUserRsvp(const OAIScheduledEventUserResponse &user_rsvp) {
    m_user_rsvp = user_rsvp;
    m_user_rsvp_isSet = true;
}

bool OAIScheduledEventResponse::is_user_rsvp_Set() const{
    return m_user_rsvp_isSet;
}

bool OAIScheduledEventResponse::is_user_rsvp_Valid() const{
    return m_user_rsvp_isValid;
}

bool OAIScheduledEventResponse::isSet() const {
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

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_scheduled_start_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_status_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_entity_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_privacy_level_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_channel_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_creator_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_creator.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_image_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_scheduled_end_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_entity_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_rsvp.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIScheduledEventResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_guild_id_isValid && m_name_isValid && m_scheduled_start_time_isValid && m_status_isValid && m_entity_type_isValid && m_privacy_level_isValid && true;
}

} // namespace dc_rest
