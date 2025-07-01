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

#include "OAISoundboardSoundResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAISoundboardSoundResponse::OAISoundboardSoundResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISoundboardSoundResponse::OAISoundboardSoundResponse() {
    this->initializeModel();
}

OAISoundboardSoundResponse::~OAISoundboardSoundResponse() {}

void OAISoundboardSoundResponse::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;

    m_sound_id_isSet = false;
    m_sound_id_isValid = false;

    m_volume_isSet = false;
    m_volume_isValid = false;

    m_available_isSet = false;
    m_available_isValid = false;

    m_emoji_id_isSet = false;
    m_emoji_id_isValid = false;

    m_emoji_name_isSet = false;
    m_emoji_name_isValid = false;

    m_guild_id_isSet = false;
    m_guild_id_isValid = false;

    m_user_isSet = false;
    m_user_isValid = false;
}

void OAISoundboardSoundResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISoundboardSoundResponse::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_sound_id_isValid = ::dc_rest::fromJsonValue(m_sound_id, json[QString("sound_id")]);
    m_sound_id_isSet = !json[QString("sound_id")].isNull() && m_sound_id_isValid;

    m_volume_isValid = ::dc_rest::fromJsonValue(m_volume, json[QString("volume")]);
    m_volume_isSet = !json[QString("volume")].isNull() && m_volume_isValid;

    m_available_isValid = ::dc_rest::fromJsonValue(m_available, json[QString("available")]);
    m_available_isSet = !json[QString("available")].isNull() && m_available_isValid;

    m_emoji_id_isValid = ::dc_rest::fromJsonValue(m_emoji_id, json[QString("emoji_id")]);
    m_emoji_id_isSet = !json[QString("emoji_id")].isNull() && m_emoji_id_isValid;

    m_emoji_name_isValid = ::dc_rest::fromJsonValue(m_emoji_name, json[QString("emoji_name")]);
    m_emoji_name_isSet = !json[QString("emoji_name")].isNull() && m_emoji_name_isValid;

    m_guild_id_isValid = ::dc_rest::fromJsonValue(m_guild_id, json[QString("guild_id")]);
    m_guild_id_isSet = !json[QString("guild_id")].isNull() && m_guild_id_isValid;

    m_user_isValid = ::dc_rest::fromJsonValue(m_user, json[QString("user")]);
    m_user_isSet = !json[QString("user")].isNull() && m_user_isValid;
}

QString OAISoundboardSoundResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISoundboardSoundResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_sound_id_isSet) {
        obj.insert(QString("sound_id"), ::dc_rest::toJsonValue(m_sound_id));
    }
    if (m_volume_isSet) {
        obj.insert(QString("volume"), ::dc_rest::toJsonValue(m_volume));
    }
    if (m_available_isSet) {
        obj.insert(QString("available"), ::dc_rest::toJsonValue(m_available));
    }
    if (m_emoji_id_isSet) {
        obj.insert(QString("emoji_id"), ::dc_rest::toJsonValue(m_emoji_id));
    }
    if (m_emoji_name_isSet) {
        obj.insert(QString("emoji_name"), ::dc_rest::toJsonValue(m_emoji_name));
    }
    if (m_guild_id_isSet) {
        obj.insert(QString("guild_id"), ::dc_rest::toJsonValue(m_guild_id));
    }
    if (m_user.isSet()) {
        obj.insert(QString("user"), ::dc_rest::toJsonValue(m_user));
    }
    return obj;
}

QString OAISoundboardSoundResponse::getName() const {
    return m_name;
}
void OAISoundboardSoundResponse::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAISoundboardSoundResponse::is_name_Set() const{
    return m_name_isSet;
}

bool OAISoundboardSoundResponse::is_name_Valid() const{
    return m_name_isValid;
}

QString OAISoundboardSoundResponse::getSoundId() const {
    return m_sound_id;
}
void OAISoundboardSoundResponse::setSoundId(const QString &sound_id) {
    m_sound_id = sound_id;
    m_sound_id_isSet = true;
}

bool OAISoundboardSoundResponse::is_sound_id_Set() const{
    return m_sound_id_isSet;
}

bool OAISoundboardSoundResponse::is_sound_id_Valid() const{
    return m_sound_id_isValid;
}

double OAISoundboardSoundResponse::getVolume() const {
    return m_volume;
}
void OAISoundboardSoundResponse::setVolume(const double &volume) {
    m_volume = volume;
    m_volume_isSet = true;
}

bool OAISoundboardSoundResponse::is_volume_Set() const{
    return m_volume_isSet;
}

bool OAISoundboardSoundResponse::is_volume_Valid() const{
    return m_volume_isValid;
}

bool OAISoundboardSoundResponse::isAvailable() const {
    return m_available;
}
void OAISoundboardSoundResponse::setAvailable(const bool &available) {
    m_available = available;
    m_available_isSet = true;
}

bool OAISoundboardSoundResponse::is_available_Set() const{
    return m_available_isSet;
}

bool OAISoundboardSoundResponse::is_available_Valid() const{
    return m_available_isValid;
}

QString OAISoundboardSoundResponse::getEmojiId() const {
    return m_emoji_id;
}
void OAISoundboardSoundResponse::setEmojiId(const QString &emoji_id) {
    m_emoji_id = emoji_id;
    m_emoji_id_isSet = true;
}

bool OAISoundboardSoundResponse::is_emoji_id_Set() const{
    return m_emoji_id_isSet;
}

bool OAISoundboardSoundResponse::is_emoji_id_Valid() const{
    return m_emoji_id_isValid;
}

QString OAISoundboardSoundResponse::getEmojiName() const {
    return m_emoji_name;
}
void OAISoundboardSoundResponse::setEmojiName(const QString &emoji_name) {
    m_emoji_name = emoji_name;
    m_emoji_name_isSet = true;
}

bool OAISoundboardSoundResponse::is_emoji_name_Set() const{
    return m_emoji_name_isSet;
}

bool OAISoundboardSoundResponse::is_emoji_name_Valid() const{
    return m_emoji_name_isValid;
}

QString OAISoundboardSoundResponse::getGuildId() const {
    return m_guild_id;
}
void OAISoundboardSoundResponse::setGuildId(const QString &guild_id) {
    m_guild_id = guild_id;
    m_guild_id_isSet = true;
}

bool OAISoundboardSoundResponse::is_guild_id_Set() const{
    return m_guild_id_isSet;
}

bool OAISoundboardSoundResponse::is_guild_id_Valid() const{
    return m_guild_id_isValid;
}

OAIUserResponse OAISoundboardSoundResponse::getUser() const {
    return m_user;
}
void OAISoundboardSoundResponse::setUser(const OAIUserResponse &user) {
    m_user = user;
    m_user_isSet = true;
}

bool OAISoundboardSoundResponse::is_user_Set() const{
    return m_user_isSet;
}

bool OAISoundboardSoundResponse::is_user_Valid() const{
    return m_user_isValid;
}

bool OAISoundboardSoundResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sound_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_volume_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_available_isSet) {
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

        if (m_guild_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISoundboardSoundResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_name_isValid && m_sound_id_isValid && m_volume_isValid && m_available_isValid && true;
}

} // namespace dc_rest
