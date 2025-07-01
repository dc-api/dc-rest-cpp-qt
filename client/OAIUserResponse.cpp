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

#include "OAIUserResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIUserResponse::OAIUserResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUserResponse::OAIUserResponse() {
    this->initializeModel();
}

OAIUserResponse::~OAIUserResponse() {}

void OAIUserResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_username_isSet = false;
    m_username_isValid = false;

    m_discriminator_isSet = false;
    m_discriminator_isValid = false;

    m_public_flags_isSet = false;
    m_public_flags_isValid = false;

    m_flags_isSet = false;
    m_flags_isValid = false;

    m_avatar_isSet = false;
    m_avatar_isValid = false;

    m_bot_isSet = false;
    m_bot_isValid = false;

    m_system_isSet = false;
    m_system_isValid = false;

    m_banner_isSet = false;
    m_banner_isValid = false;

    m_accent_color_isSet = false;
    m_accent_color_isValid = false;

    m_global_name_isSet = false;
    m_global_name_isValid = false;

    m_avatar_decoration_data_isSet = false;
    m_avatar_decoration_data_isValid = false;

    m_collectibles_isSet = false;
    m_collectibles_isValid = false;

    m_primary_guild_isSet = false;
    m_primary_guild_isValid = false;
}

void OAIUserResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUserResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_username_isValid = ::dc_rest::fromJsonValue(m_username, json[QString("username")]);
    m_username_isSet = !json[QString("username")].isNull() && m_username_isValid;

    m_discriminator_isValid = ::dc_rest::fromJsonValue(m_discriminator, json[QString("discriminator")]);
    m_discriminator_isSet = !json[QString("discriminator")].isNull() && m_discriminator_isValid;

    m_public_flags_isValid = ::dc_rest::fromJsonValue(m_public_flags, json[QString("public_flags")]);
    m_public_flags_isSet = !json[QString("public_flags")].isNull() && m_public_flags_isValid;

    m_flags_isValid = ::dc_rest::fromJsonValue(m_flags, json[QString("flags")]);
    m_flags_isSet = !json[QString("flags")].isNull() && m_flags_isValid;

    m_avatar_isValid = ::dc_rest::fromJsonValue(m_avatar, json[QString("avatar")]);
    m_avatar_isSet = !json[QString("avatar")].isNull() && m_avatar_isValid;

    m_bot_isValid = ::dc_rest::fromJsonValue(m_bot, json[QString("bot")]);
    m_bot_isSet = !json[QString("bot")].isNull() && m_bot_isValid;

    m_system_isValid = ::dc_rest::fromJsonValue(m_system, json[QString("system")]);
    m_system_isSet = !json[QString("system")].isNull() && m_system_isValid;

    m_banner_isValid = ::dc_rest::fromJsonValue(m_banner, json[QString("banner")]);
    m_banner_isSet = !json[QString("banner")].isNull() && m_banner_isValid;

    m_accent_color_isValid = ::dc_rest::fromJsonValue(m_accent_color, json[QString("accent_color")]);
    m_accent_color_isSet = !json[QString("accent_color")].isNull() && m_accent_color_isValid;

    m_global_name_isValid = ::dc_rest::fromJsonValue(m_global_name, json[QString("global_name")]);
    m_global_name_isSet = !json[QString("global_name")].isNull() && m_global_name_isValid;

    m_avatar_decoration_data_isValid = ::dc_rest::fromJsonValue(m_avatar_decoration_data, json[QString("avatar_decoration_data")]);
    m_avatar_decoration_data_isSet = !json[QString("avatar_decoration_data")].isNull() && m_avatar_decoration_data_isValid;

    m_collectibles_isValid = ::dc_rest::fromJsonValue(m_collectibles, json[QString("collectibles")]);
    m_collectibles_isSet = !json[QString("collectibles")].isNull() && m_collectibles_isValid;

    m_primary_guild_isValid = ::dc_rest::fromJsonValue(m_primary_guild, json[QString("primary_guild")]);
    m_primary_guild_isSet = !json[QString("primary_guild")].isNull() && m_primary_guild_isValid;
}

QString OAIUserResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUserResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_username_isSet) {
        obj.insert(QString("username"), ::dc_rest::toJsonValue(m_username));
    }
    if (m_discriminator_isSet) {
        obj.insert(QString("discriminator"), ::dc_rest::toJsonValue(m_discriminator));
    }
    if (m_public_flags_isSet) {
        obj.insert(QString("public_flags"), ::dc_rest::toJsonValue(m_public_flags));
    }
    if (m_flags_isSet) {
        obj.insert(QString("flags"), ::dc_rest::toJsonValue(m_flags));
    }
    if (m_avatar_isSet) {
        obj.insert(QString("avatar"), ::dc_rest::toJsonValue(m_avatar));
    }
    if (m_bot_isSet) {
        obj.insert(QString("bot"), ::dc_rest::toJsonValue(m_bot));
    }
    if (m_system_isSet) {
        obj.insert(QString("system"), ::dc_rest::toJsonValue(m_system));
    }
    if (m_banner_isSet) {
        obj.insert(QString("banner"), ::dc_rest::toJsonValue(m_banner));
    }
    if (m_accent_color_isSet) {
        obj.insert(QString("accent_color"), ::dc_rest::toJsonValue(m_accent_color));
    }
    if (m_global_name_isSet) {
        obj.insert(QString("global_name"), ::dc_rest::toJsonValue(m_global_name));
    }
    if (m_avatar_decoration_data.isSet()) {
        obj.insert(QString("avatar_decoration_data"), ::dc_rest::toJsonValue(m_avatar_decoration_data));
    }
    if (m_collectibles.isSet()) {
        obj.insert(QString("collectibles"), ::dc_rest::toJsonValue(m_collectibles));
    }
    if (m_primary_guild.isSet()) {
        obj.insert(QString("primary_guild"), ::dc_rest::toJsonValue(m_primary_guild));
    }
    return obj;
}

QString OAIUserResponse::getId() const {
    return m_id;
}
void OAIUserResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIUserResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIUserResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIUserResponse::getUsername() const {
    return m_username;
}
void OAIUserResponse::setUsername(const QString &username) {
    m_username = username;
    m_username_isSet = true;
}

bool OAIUserResponse::is_username_Set() const{
    return m_username_isSet;
}

bool OAIUserResponse::is_username_Valid() const{
    return m_username_isValid;
}

QString OAIUserResponse::getDiscriminator() const {
    return m_discriminator;
}
void OAIUserResponse::setDiscriminator(const QString &discriminator) {
    m_discriminator = discriminator;
    m_discriminator_isSet = true;
}

bool OAIUserResponse::is_discriminator_Set() const{
    return m_discriminator_isSet;
}

bool OAIUserResponse::is_discriminator_Valid() const{
    return m_discriminator_isValid;
}

qint32 OAIUserResponse::getPublicFlags() const {
    return m_public_flags;
}
void OAIUserResponse::setPublicFlags(const qint32 &public_flags) {
    m_public_flags = public_flags;
    m_public_flags_isSet = true;
}

bool OAIUserResponse::is_public_flags_Set() const{
    return m_public_flags_isSet;
}

bool OAIUserResponse::is_public_flags_Valid() const{
    return m_public_flags_isValid;
}

qint64 OAIUserResponse::getFlags() const {
    return m_flags;
}
void OAIUserResponse::setFlags(const qint64 &flags) {
    m_flags = flags;
    m_flags_isSet = true;
}

bool OAIUserResponse::is_flags_Set() const{
    return m_flags_isSet;
}

bool OAIUserResponse::is_flags_Valid() const{
    return m_flags_isValid;
}

QString OAIUserResponse::getAvatar() const {
    return m_avatar;
}
void OAIUserResponse::setAvatar(const QString &avatar) {
    m_avatar = avatar;
    m_avatar_isSet = true;
}

bool OAIUserResponse::is_avatar_Set() const{
    return m_avatar_isSet;
}

bool OAIUserResponse::is_avatar_Valid() const{
    return m_avatar_isValid;
}

bool OAIUserResponse::isBot() const {
    return m_bot;
}
void OAIUserResponse::setBot(const bool &bot) {
    m_bot = bot;
    m_bot_isSet = true;
}

bool OAIUserResponse::is_bot_Set() const{
    return m_bot_isSet;
}

bool OAIUserResponse::is_bot_Valid() const{
    return m_bot_isValid;
}

bool OAIUserResponse::isSystem() const {
    return m_system;
}
void OAIUserResponse::setSystem(const bool &system) {
    m_system = system;
    m_system_isSet = true;
}

bool OAIUserResponse::is_system_Set() const{
    return m_system_isSet;
}

bool OAIUserResponse::is_system_Valid() const{
    return m_system_isValid;
}

QString OAIUserResponse::getBanner() const {
    return m_banner;
}
void OAIUserResponse::setBanner(const QString &banner) {
    m_banner = banner;
    m_banner_isSet = true;
}

bool OAIUserResponse::is_banner_Set() const{
    return m_banner_isSet;
}

bool OAIUserResponse::is_banner_Valid() const{
    return m_banner_isValid;
}

qint32 OAIUserResponse::getAccentColor() const {
    return m_accent_color;
}
void OAIUserResponse::setAccentColor(const qint32 &accent_color) {
    m_accent_color = accent_color;
    m_accent_color_isSet = true;
}

bool OAIUserResponse::is_accent_color_Set() const{
    return m_accent_color_isSet;
}

bool OAIUserResponse::is_accent_color_Valid() const{
    return m_accent_color_isValid;
}

QString OAIUserResponse::getGlobalName() const {
    return m_global_name;
}
void OAIUserResponse::setGlobalName(const QString &global_name) {
    m_global_name = global_name;
    m_global_name_isSet = true;
}

bool OAIUserResponse::is_global_name_Set() const{
    return m_global_name_isSet;
}

bool OAIUserResponse::is_global_name_Valid() const{
    return m_global_name_isValid;
}

OAIUserAvatarDecorationResponse OAIUserResponse::getAvatarDecorationData() const {
    return m_avatar_decoration_data;
}
void OAIUserResponse::setAvatarDecorationData(const OAIUserAvatarDecorationResponse &avatar_decoration_data) {
    m_avatar_decoration_data = avatar_decoration_data;
    m_avatar_decoration_data_isSet = true;
}

bool OAIUserResponse::is_avatar_decoration_data_Set() const{
    return m_avatar_decoration_data_isSet;
}

bool OAIUserResponse::is_avatar_decoration_data_Valid() const{
    return m_avatar_decoration_data_isValid;
}

OAIUserCollectiblesResponse OAIUserResponse::getCollectibles() const {
    return m_collectibles;
}
void OAIUserResponse::setCollectibles(const OAIUserCollectiblesResponse &collectibles) {
    m_collectibles = collectibles;
    m_collectibles_isSet = true;
}

bool OAIUserResponse::is_collectibles_Set() const{
    return m_collectibles_isSet;
}

bool OAIUserResponse::is_collectibles_Valid() const{
    return m_collectibles_isValid;
}

OAIUserPrimaryGuildResponse OAIUserResponse::getPrimaryGuild() const {
    return m_primary_guild;
}
void OAIUserResponse::setPrimaryGuild(const OAIUserPrimaryGuildResponse &primary_guild) {
    m_primary_guild = primary_guild;
    m_primary_guild_isSet = true;
}

bool OAIUserResponse::is_primary_guild_Set() const{
    return m_primary_guild_isSet;
}

bool OAIUserResponse::is_primary_guild_Valid() const{
    return m_primary_guild_isValid;
}

bool OAIUserResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_username_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_discriminator_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_public_flags_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_flags_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_avatar_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_bot_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_system_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_banner_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_accent_color_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_global_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_avatar_decoration_data.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_collectibles.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_primary_guild.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUserResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_username_isValid && m_discriminator_isValid && m_public_flags_isValid && m_flags_isValid && true;
}

} // namespace dc_rest
