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

#include "OAISoundboardCreateRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAISoundboardCreateRequest::OAISoundboardCreateRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISoundboardCreateRequest::OAISoundboardCreateRequest() {
    this->initializeModel();
}

OAISoundboardCreateRequest::~OAISoundboardCreateRequest() {}

void OAISoundboardCreateRequest::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;

    m_sound_isSet = false;
    m_sound_isValid = false;

    m_volume_isSet = false;
    m_volume_isValid = false;

    m_emoji_id_isSet = false;
    m_emoji_id_isValid = false;

    m_emoji_name_isSet = false;
    m_emoji_name_isValid = false;
}

void OAISoundboardCreateRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISoundboardCreateRequest::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_sound_isValid = ::dc_rest::fromJsonValue(m_sound, json[QString("sound")]);
    m_sound_isSet = !json[QString("sound")].isNull() && m_sound_isValid;

    m_volume_isValid = ::dc_rest::fromJsonValue(m_volume, json[QString("volume")]);
    m_volume_isSet = !json[QString("volume")].isNull() && m_volume_isValid;

    m_emoji_id_isValid = ::dc_rest::fromJsonValue(m_emoji_id, json[QString("emoji_id")]);
    m_emoji_id_isSet = !json[QString("emoji_id")].isNull() && m_emoji_id_isValid;

    m_emoji_name_isValid = ::dc_rest::fromJsonValue(m_emoji_name, json[QString("emoji_name")]);
    m_emoji_name_isSet = !json[QString("emoji_name")].isNull() && m_emoji_name_isValid;
}

QString OAISoundboardCreateRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISoundboardCreateRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_sound_isSet) {
        obj.insert(QString("sound"), ::dc_rest::toJsonValue(m_sound));
    }
    if (m_volume_isSet) {
        obj.insert(QString("volume"), ::dc_rest::toJsonValue(m_volume));
    }
    if (m_emoji_id_isSet) {
        obj.insert(QString("emoji_id"), ::dc_rest::toJsonValue(m_emoji_id));
    }
    if (m_emoji_name_isSet) {
        obj.insert(QString("emoji_name"), ::dc_rest::toJsonValue(m_emoji_name));
    }
    return obj;
}

QString OAISoundboardCreateRequest::getName() const {
    return m_name;
}
void OAISoundboardCreateRequest::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAISoundboardCreateRequest::is_name_Set() const{
    return m_name_isSet;
}

bool OAISoundboardCreateRequest::is_name_Valid() const{
    return m_name_isValid;
}

QString OAISoundboardCreateRequest::getSound() const {
    return m_sound;
}
void OAISoundboardCreateRequest::setSound(const QString &sound) {
    m_sound = sound;
    m_sound_isSet = true;
}

bool OAISoundboardCreateRequest::is_sound_Set() const{
    return m_sound_isSet;
}

bool OAISoundboardCreateRequest::is_sound_Valid() const{
    return m_sound_isValid;
}

double OAISoundboardCreateRequest::getVolume() const {
    return m_volume;
}
void OAISoundboardCreateRequest::setVolume(const double &volume) {
    m_volume = volume;
    m_volume_isSet = true;
}

bool OAISoundboardCreateRequest::is_volume_Set() const{
    return m_volume_isSet;
}

bool OAISoundboardCreateRequest::is_volume_Valid() const{
    return m_volume_isValid;
}

QString OAISoundboardCreateRequest::getEmojiId() const {
    return m_emoji_id;
}
void OAISoundboardCreateRequest::setEmojiId(const QString &emoji_id) {
    m_emoji_id = emoji_id;
    m_emoji_id_isSet = true;
}

bool OAISoundboardCreateRequest::is_emoji_id_Set() const{
    return m_emoji_id_isSet;
}

bool OAISoundboardCreateRequest::is_emoji_id_Valid() const{
    return m_emoji_id_isValid;
}

QString OAISoundboardCreateRequest::getEmojiName() const {
    return m_emoji_name;
}
void OAISoundboardCreateRequest::setEmojiName(const QString &emoji_name) {
    m_emoji_name = emoji_name;
    m_emoji_name_isSet = true;
}

bool OAISoundboardCreateRequest::is_emoji_name_Set() const{
    return m_emoji_name_isSet;
}

bool OAISoundboardCreateRequest::is_emoji_name_Valid() const{
    return m_emoji_name_isValid;
}

bool OAISoundboardCreateRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sound_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_volume_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_emoji_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_emoji_name_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISoundboardCreateRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_name_isValid && m_sound_isValid && true;
}

} // namespace dc_rest
