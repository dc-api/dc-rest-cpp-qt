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

#include "OAIVoiceScheduledEventCreateRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIVoiceScheduledEventCreateRequest::OAIVoiceScheduledEventCreateRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIVoiceScheduledEventCreateRequest::OAIVoiceScheduledEventCreateRequest() {
    this->initializeModel();
}

OAIVoiceScheduledEventCreateRequest::~OAIVoiceScheduledEventCreateRequest() {}

void OAIVoiceScheduledEventCreateRequest::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;

    m_scheduled_start_time_isSet = false;
    m_scheduled_start_time_isValid = false;

    m_privacy_level_isSet = false;
    m_privacy_level_isValid = false;

    m_entity_type_isSet = false;
    m_entity_type_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_image_isSet = false;
    m_image_isValid = false;

    m_scheduled_end_time_isSet = false;
    m_scheduled_end_time_isValid = false;

    m_channel_id_isSet = false;
    m_channel_id_isValid = false;

    m_entity_metadata_isSet = false;
    m_entity_metadata_isValid = false;
}

void OAIVoiceScheduledEventCreateRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIVoiceScheduledEventCreateRequest::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_scheduled_start_time_isValid = ::dc_rest::fromJsonValue(m_scheduled_start_time, json[QString("scheduled_start_time")]);
    m_scheduled_start_time_isSet = !json[QString("scheduled_start_time")].isNull() && m_scheduled_start_time_isValid;

    m_privacy_level_isValid = ::dc_rest::fromJsonValue(m_privacy_level, json[QString("privacy_level")]);
    m_privacy_level_isSet = !json[QString("privacy_level")].isNull() && m_privacy_level_isValid;

    m_entity_type_isValid = ::dc_rest::fromJsonValue(m_entity_type, json[QString("entity_type")]);
    m_entity_type_isSet = !json[QString("entity_type")].isNull() && m_entity_type_isValid;

    m_description_isValid = ::dc_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_image_isValid = ::dc_rest::fromJsonValue(m_image, json[QString("image")]);
    m_image_isSet = !json[QString("image")].isNull() && m_image_isValid;

    m_scheduled_end_time_isValid = ::dc_rest::fromJsonValue(m_scheduled_end_time, json[QString("scheduled_end_time")]);
    m_scheduled_end_time_isSet = !json[QString("scheduled_end_time")].isNull() && m_scheduled_end_time_isValid;

    m_channel_id_isValid = ::dc_rest::fromJsonValue(m_channel_id, json[QString("channel_id")]);
    m_channel_id_isSet = !json[QString("channel_id")].isNull() && m_channel_id_isValid;

    m_entity_metadata_isValid = ::dc_rest::fromJsonValue(m_entity_metadata, json[QString("entity_metadata")]);
    m_entity_metadata_isSet = !json[QString("entity_metadata")].isNull() && m_entity_metadata_isValid;
}

QString OAIVoiceScheduledEventCreateRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIVoiceScheduledEventCreateRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_scheduled_start_time_isSet) {
        obj.insert(QString("scheduled_start_time"), ::dc_rest::toJsonValue(m_scheduled_start_time));
    }
    if (m_privacy_level_isSet) {
        obj.insert(QString("privacy_level"), ::dc_rest::toJsonValue(m_privacy_level));
    }
    if (m_entity_type_isSet) {
        obj.insert(QString("entity_type"), ::dc_rest::toJsonValue(m_entity_type));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::dc_rest::toJsonValue(m_description));
    }
    if (m_image_isSet) {
        obj.insert(QString("image"), ::dc_rest::toJsonValue(m_image));
    }
    if (m_scheduled_end_time_isSet) {
        obj.insert(QString("scheduled_end_time"), ::dc_rest::toJsonValue(m_scheduled_end_time));
    }
    if (m_channel_id_isSet) {
        obj.insert(QString("channel_id"), ::dc_rest::toJsonValue(m_channel_id));
    }
    if (m_entity_metadata_isSet) {
        obj.insert(QString("entity_metadata"), ::dc_rest::toJsonValue(m_entity_metadata));
    }
    return obj;
}

QString OAIVoiceScheduledEventCreateRequest::getName() const {
    return m_name;
}
void OAIVoiceScheduledEventCreateRequest::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIVoiceScheduledEventCreateRequest::is_name_Set() const{
    return m_name_isSet;
}

bool OAIVoiceScheduledEventCreateRequest::is_name_Valid() const{
    return m_name_isValid;
}

QDateTime OAIVoiceScheduledEventCreateRequest::getScheduledStartTime() const {
    return m_scheduled_start_time;
}
void OAIVoiceScheduledEventCreateRequest::setScheduledStartTime(const QDateTime &scheduled_start_time) {
    m_scheduled_start_time = scheduled_start_time;
    m_scheduled_start_time_isSet = true;
}

bool OAIVoiceScheduledEventCreateRequest::is_scheduled_start_time_Set() const{
    return m_scheduled_start_time_isSet;
}

bool OAIVoiceScheduledEventCreateRequest::is_scheduled_start_time_Valid() const{
    return m_scheduled_start_time_isValid;
}

QJsonValue OAIVoiceScheduledEventCreateRequest::getPrivacyLevel() const {
    return m_privacy_level;
}
void OAIVoiceScheduledEventCreateRequest::setPrivacyLevel(const QJsonValue &privacy_level) {
    m_privacy_level = privacy_level;
    m_privacy_level_isSet = true;
}

bool OAIVoiceScheduledEventCreateRequest::is_privacy_level_Set() const{
    return m_privacy_level_isSet;
}

bool OAIVoiceScheduledEventCreateRequest::is_privacy_level_Valid() const{
    return m_privacy_level_isValid;
}

qint32 OAIVoiceScheduledEventCreateRequest::getEntityType() const {
    return m_entity_type;
}
void OAIVoiceScheduledEventCreateRequest::setEntityType(const qint32 &entity_type) {
    m_entity_type = entity_type;
    m_entity_type_isSet = true;
}

bool OAIVoiceScheduledEventCreateRequest::is_entity_type_Set() const{
    return m_entity_type_isSet;
}

bool OAIVoiceScheduledEventCreateRequest::is_entity_type_Valid() const{
    return m_entity_type_isValid;
}

QString OAIVoiceScheduledEventCreateRequest::getDescription() const {
    return m_description;
}
void OAIVoiceScheduledEventCreateRequest::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIVoiceScheduledEventCreateRequest::is_description_Set() const{
    return m_description_isSet;
}

bool OAIVoiceScheduledEventCreateRequest::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIVoiceScheduledEventCreateRequest::getImage() const {
    return m_image;
}
void OAIVoiceScheduledEventCreateRequest::setImage(const QString &image) {
    m_image = image;
    m_image_isSet = true;
}

bool OAIVoiceScheduledEventCreateRequest::is_image_Set() const{
    return m_image_isSet;
}

bool OAIVoiceScheduledEventCreateRequest::is_image_Valid() const{
    return m_image_isValid;
}

QDateTime OAIVoiceScheduledEventCreateRequest::getScheduledEndTime() const {
    return m_scheduled_end_time;
}
void OAIVoiceScheduledEventCreateRequest::setScheduledEndTime(const QDateTime &scheduled_end_time) {
    m_scheduled_end_time = scheduled_end_time;
    m_scheduled_end_time_isSet = true;
}

bool OAIVoiceScheduledEventCreateRequest::is_scheduled_end_time_Set() const{
    return m_scheduled_end_time_isSet;
}

bool OAIVoiceScheduledEventCreateRequest::is_scheduled_end_time_Valid() const{
    return m_scheduled_end_time_isValid;
}

QString OAIVoiceScheduledEventCreateRequest::getChannelId() const {
    return m_channel_id;
}
void OAIVoiceScheduledEventCreateRequest::setChannelId(const QString &channel_id) {
    m_channel_id = channel_id;
    m_channel_id_isSet = true;
}

bool OAIVoiceScheduledEventCreateRequest::is_channel_id_Set() const{
    return m_channel_id_isSet;
}

bool OAIVoiceScheduledEventCreateRequest::is_channel_id_Valid() const{
    return m_channel_id_isValid;
}

OAIObject OAIVoiceScheduledEventCreateRequest::getEntityMetadata() const {
    return m_entity_metadata;
}
void OAIVoiceScheduledEventCreateRequest::setEntityMetadata(const OAIObject &entity_metadata) {
    m_entity_metadata = entity_metadata;
    m_entity_metadata_isSet = true;
}

bool OAIVoiceScheduledEventCreateRequest::is_entity_metadata_Set() const{
    return m_entity_metadata_isSet;
}

bool OAIVoiceScheduledEventCreateRequest::is_entity_metadata_Valid() const{
    return m_entity_metadata_isValid;
}

bool OAIVoiceScheduledEventCreateRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_scheduled_start_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_privacy_level_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_entity_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
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

        if (m_channel_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_entity_metadata_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIVoiceScheduledEventCreateRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_name_isValid && m_scheduled_start_time_isValid && m_privacy_level_isValid && m_entity_type_isValid && true;
}

} // namespace dc_rest
