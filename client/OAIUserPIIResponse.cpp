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

#include "OAIUserPIIResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIUserPIIResponse::OAIUserPIIResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUserPIIResponse::OAIUserPIIResponse() {
    this->initializeModel();
}

OAIUserPIIResponse::~OAIUserPIIResponse() {}

void OAIUserPIIResponse::initializeModel() {

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

    m_mfa_enabled_isSet = false;
    m_mfa_enabled_isValid = false;

    m_locale_isSet = false;
    m_locale_isValid = false;

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

    m_premium_type_isSet = false;
    m_premium_type_isValid = false;

    m_email_isSet = false;
    m_email_isValid = false;

    m_verified_isSet = false;
    m_verified_isValid = false;
}

void OAIUserPIIResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUserPIIResponse::fromJsonObject(QJsonObject json) {

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

    m_mfa_enabled_isValid = ::dc_rest::fromJsonValue(m_mfa_enabled, json[QString("mfa_enabled")]);
    m_mfa_enabled_isSet = !json[QString("mfa_enabled")].isNull() && m_mfa_enabled_isValid;

    m_locale_isValid = ::dc_rest::fromJsonValue(m_locale, json[QString("locale")]);
    m_locale_isSet = !json[QString("locale")].isNull() && m_locale_isValid;

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

    m_premium_type_isValid = ::dc_rest::fromJsonValue(m_premium_type, json[QString("premium_type")]);
    m_premium_type_isSet = !json[QString("premium_type")].isNull() && m_premium_type_isValid;

    m_email_isValid = ::dc_rest::fromJsonValue(m_email, json[QString("email")]);
    m_email_isSet = !json[QString("email")].isNull() && m_email_isValid;

    m_verified_isValid = ::dc_rest::fromJsonValue(m_verified, json[QString("verified")]);
    m_verified_isSet = !json[QString("verified")].isNull() && m_verified_isValid;
}

QString OAIUserPIIResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUserPIIResponse::asJsonObject() const {
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
    if (m_mfa_enabled_isSet) {
        obj.insert(QString("mfa_enabled"), ::dc_rest::toJsonValue(m_mfa_enabled));
    }
    if (m_locale_isSet) {
        obj.insert(QString("locale"), ::dc_rest::toJsonValue(m_locale));
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
    if (m_premium_type_isSet) {
        obj.insert(QString("premium_type"), ::dc_rest::toJsonValue(m_premium_type));
    }
    if (m_email_isSet) {
        obj.insert(QString("email"), ::dc_rest::toJsonValue(m_email));
    }
    if (m_verified_isSet) {
        obj.insert(QString("verified"), ::dc_rest::toJsonValue(m_verified));
    }
    return obj;
}

QString OAIUserPIIResponse::getId() const {
    return m_id;
}
void OAIUserPIIResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIUserPIIResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIUserPIIResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIUserPIIResponse::getUsername() const {
    return m_username;
}
void OAIUserPIIResponse::setUsername(const QString &username) {
    m_username = username;
    m_username_isSet = true;
}

bool OAIUserPIIResponse::is_username_Set() const{
    return m_username_isSet;
}

bool OAIUserPIIResponse::is_username_Valid() const{
    return m_username_isValid;
}

QString OAIUserPIIResponse::getDiscriminator() const {
    return m_discriminator;
}
void OAIUserPIIResponse::setDiscriminator(const QString &discriminator) {
    m_discriminator = discriminator;
    m_discriminator_isSet = true;
}

bool OAIUserPIIResponse::is_discriminator_Set() const{
    return m_discriminator_isSet;
}

bool OAIUserPIIResponse::is_discriminator_Valid() const{
    return m_discriminator_isValid;
}

qint32 OAIUserPIIResponse::getPublicFlags() const {
    return m_public_flags;
}
void OAIUserPIIResponse::setPublicFlags(const qint32 &public_flags) {
    m_public_flags = public_flags;
    m_public_flags_isSet = true;
}

bool OAIUserPIIResponse::is_public_flags_Set() const{
    return m_public_flags_isSet;
}

bool OAIUserPIIResponse::is_public_flags_Valid() const{
    return m_public_flags_isValid;
}

qint64 OAIUserPIIResponse::getFlags() const {
    return m_flags;
}
void OAIUserPIIResponse::setFlags(const qint64 &flags) {
    m_flags = flags;
    m_flags_isSet = true;
}

bool OAIUserPIIResponse::is_flags_Set() const{
    return m_flags_isSet;
}

bool OAIUserPIIResponse::is_flags_Valid() const{
    return m_flags_isValid;
}

bool OAIUserPIIResponse::isMfaEnabled() const {
    return m_mfa_enabled;
}
void OAIUserPIIResponse::setMfaEnabled(const bool &mfa_enabled) {
    m_mfa_enabled = mfa_enabled;
    m_mfa_enabled_isSet = true;
}

bool OAIUserPIIResponse::is_mfa_enabled_Set() const{
    return m_mfa_enabled_isSet;
}

bool OAIUserPIIResponse::is_mfa_enabled_Valid() const{
    return m_mfa_enabled_isValid;
}

QString OAIUserPIIResponse::getLocale() const {
    return m_locale;
}
void OAIUserPIIResponse::setLocale(const QString &locale) {
    m_locale = locale;
    m_locale_isSet = true;
}

bool OAIUserPIIResponse::is_locale_Set() const{
    return m_locale_isSet;
}

bool OAIUserPIIResponse::is_locale_Valid() const{
    return m_locale_isValid;
}

QString OAIUserPIIResponse::getAvatar() const {
    return m_avatar;
}
void OAIUserPIIResponse::setAvatar(const QString &avatar) {
    m_avatar = avatar;
    m_avatar_isSet = true;
}

bool OAIUserPIIResponse::is_avatar_Set() const{
    return m_avatar_isSet;
}

bool OAIUserPIIResponse::is_avatar_Valid() const{
    return m_avatar_isValid;
}

bool OAIUserPIIResponse::isBot() const {
    return m_bot;
}
void OAIUserPIIResponse::setBot(const bool &bot) {
    m_bot = bot;
    m_bot_isSet = true;
}

bool OAIUserPIIResponse::is_bot_Set() const{
    return m_bot_isSet;
}

bool OAIUserPIIResponse::is_bot_Valid() const{
    return m_bot_isValid;
}

bool OAIUserPIIResponse::isSystem() const {
    return m_system;
}
void OAIUserPIIResponse::setSystem(const bool &system) {
    m_system = system;
    m_system_isSet = true;
}

bool OAIUserPIIResponse::is_system_Set() const{
    return m_system_isSet;
}

bool OAIUserPIIResponse::is_system_Valid() const{
    return m_system_isValid;
}

QString OAIUserPIIResponse::getBanner() const {
    return m_banner;
}
void OAIUserPIIResponse::setBanner(const QString &banner) {
    m_banner = banner;
    m_banner_isSet = true;
}

bool OAIUserPIIResponse::is_banner_Set() const{
    return m_banner_isSet;
}

bool OAIUserPIIResponse::is_banner_Valid() const{
    return m_banner_isValid;
}

qint32 OAIUserPIIResponse::getAccentColor() const {
    return m_accent_color;
}
void OAIUserPIIResponse::setAccentColor(const qint32 &accent_color) {
    m_accent_color = accent_color;
    m_accent_color_isSet = true;
}

bool OAIUserPIIResponse::is_accent_color_Set() const{
    return m_accent_color_isSet;
}

bool OAIUserPIIResponse::is_accent_color_Valid() const{
    return m_accent_color_isValid;
}

QString OAIUserPIIResponse::getGlobalName() const {
    return m_global_name;
}
void OAIUserPIIResponse::setGlobalName(const QString &global_name) {
    m_global_name = global_name;
    m_global_name_isSet = true;
}

bool OAIUserPIIResponse::is_global_name_Set() const{
    return m_global_name_isSet;
}

bool OAIUserPIIResponse::is_global_name_Valid() const{
    return m_global_name_isValid;
}

OAIUserAvatarDecorationResponse OAIUserPIIResponse::getAvatarDecorationData() const {
    return m_avatar_decoration_data;
}
void OAIUserPIIResponse::setAvatarDecorationData(const OAIUserAvatarDecorationResponse &avatar_decoration_data) {
    m_avatar_decoration_data = avatar_decoration_data;
    m_avatar_decoration_data_isSet = true;
}

bool OAIUserPIIResponse::is_avatar_decoration_data_Set() const{
    return m_avatar_decoration_data_isSet;
}

bool OAIUserPIIResponse::is_avatar_decoration_data_Valid() const{
    return m_avatar_decoration_data_isValid;
}

OAIUserCollectiblesResponse OAIUserPIIResponse::getCollectibles() const {
    return m_collectibles;
}
void OAIUserPIIResponse::setCollectibles(const OAIUserCollectiblesResponse &collectibles) {
    m_collectibles = collectibles;
    m_collectibles_isSet = true;
}

bool OAIUserPIIResponse::is_collectibles_Set() const{
    return m_collectibles_isSet;
}

bool OAIUserPIIResponse::is_collectibles_Valid() const{
    return m_collectibles_isValid;
}

OAIUserPrimaryGuildResponse OAIUserPIIResponse::getPrimaryGuild() const {
    return m_primary_guild;
}
void OAIUserPIIResponse::setPrimaryGuild(const OAIUserPrimaryGuildResponse &primary_guild) {
    m_primary_guild = primary_guild;
    m_primary_guild_isSet = true;
}

bool OAIUserPIIResponse::is_primary_guild_Set() const{
    return m_primary_guild_isSet;
}

bool OAIUserPIIResponse::is_primary_guild_Valid() const{
    return m_primary_guild_isValid;
}

qint32 OAIUserPIIResponse::getPremiumType() const {
    return m_premium_type;
}
void OAIUserPIIResponse::setPremiumType(const qint32 &premium_type) {
    m_premium_type = premium_type;
    m_premium_type_isSet = true;
}

bool OAIUserPIIResponse::is_premium_type_Set() const{
    return m_premium_type_isSet;
}

bool OAIUserPIIResponse::is_premium_type_Valid() const{
    return m_premium_type_isValid;
}

QString OAIUserPIIResponse::getEmail() const {
    return m_email;
}
void OAIUserPIIResponse::setEmail(const QString &email) {
    m_email = email;
    m_email_isSet = true;
}

bool OAIUserPIIResponse::is_email_Set() const{
    return m_email_isSet;
}

bool OAIUserPIIResponse::is_email_Valid() const{
    return m_email_isValid;
}

bool OAIUserPIIResponse::isVerified() const {
    return m_verified;
}
void OAIUserPIIResponse::setVerified(const bool &verified) {
    m_verified = verified;
    m_verified_isSet = true;
}

bool OAIUserPIIResponse::is_verified_Set() const{
    return m_verified_isSet;
}

bool OAIUserPIIResponse::is_verified_Valid() const{
    return m_verified_isValid;
}

bool OAIUserPIIResponse::isSet() const {
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

        if (m_mfa_enabled_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_locale_isSet) {
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

        if (m_premium_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_email_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_verified_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUserPIIResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_username_isValid && m_discriminator_isValid && m_public_flags_isValid && m_flags_isValid && m_mfa_enabled_isValid && m_locale_isValid && true;
}

} // namespace dc_rest
