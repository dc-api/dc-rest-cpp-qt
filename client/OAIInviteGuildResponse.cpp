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

#include "OAIInviteGuildResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIInviteGuildResponse::OAIInviteGuildResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIInviteGuildResponse::OAIInviteGuildResponse() {
    this->initializeModel();
}

OAIInviteGuildResponse::~OAIInviteGuildResponse() {}

void OAIInviteGuildResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_features_isSet = false;
    m_features_isValid = false;

    m_splash_isSet = false;
    m_splash_isValid = false;

    m_banner_isSet = false;
    m_banner_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_icon_isSet = false;
    m_icon_isValid = false;

    m_verification_level_isSet = false;
    m_verification_level_isValid = false;

    m_vanity_url_code_isSet = false;
    m_vanity_url_code_isValid = false;

    m_nsfw_level_isSet = false;
    m_nsfw_level_isValid = false;

    m_nsfw_isSet = false;
    m_nsfw_isValid = false;

    m_premium_subscription_count_isSet = false;
    m_premium_subscription_count_isValid = false;
}

void OAIInviteGuildResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIInviteGuildResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_features_isValid = ::dc_rest::fromJsonValue(m_features, json[QString("features")]);
    m_features_isSet = !json[QString("features")].isNull() && m_features_isValid;

    m_splash_isValid = ::dc_rest::fromJsonValue(m_splash, json[QString("splash")]);
    m_splash_isSet = !json[QString("splash")].isNull() && m_splash_isValid;

    m_banner_isValid = ::dc_rest::fromJsonValue(m_banner, json[QString("banner")]);
    m_banner_isSet = !json[QString("banner")].isNull() && m_banner_isValid;

    m_description_isValid = ::dc_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_icon_isValid = ::dc_rest::fromJsonValue(m_icon, json[QString("icon")]);
    m_icon_isSet = !json[QString("icon")].isNull() && m_icon_isValid;

    m_verification_level_isValid = ::dc_rest::fromJsonValue(m_verification_level, json[QString("verification_level")]);
    m_verification_level_isSet = !json[QString("verification_level")].isNull() && m_verification_level_isValid;

    m_vanity_url_code_isValid = ::dc_rest::fromJsonValue(m_vanity_url_code, json[QString("vanity_url_code")]);
    m_vanity_url_code_isSet = !json[QString("vanity_url_code")].isNull() && m_vanity_url_code_isValid;

    m_nsfw_level_isValid = ::dc_rest::fromJsonValue(m_nsfw_level, json[QString("nsfw_level")]);
    m_nsfw_level_isSet = !json[QString("nsfw_level")].isNull() && m_nsfw_level_isValid;

    m_nsfw_isValid = ::dc_rest::fromJsonValue(m_nsfw, json[QString("nsfw")]);
    m_nsfw_isSet = !json[QString("nsfw")].isNull() && m_nsfw_isValid;

    m_premium_subscription_count_isValid = ::dc_rest::fromJsonValue(m_premium_subscription_count, json[QString("premium_subscription_count")]);
    m_premium_subscription_count_isSet = !json[QString("premium_subscription_count")].isNull() && m_premium_subscription_count_isValid;
}

QString OAIInviteGuildResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIInviteGuildResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_features.size() > 0) {
        obj.insert(QString("features"), ::dc_rest::toJsonValue(m_features));
    }
    if (m_splash_isSet) {
        obj.insert(QString("splash"), ::dc_rest::toJsonValue(m_splash));
    }
    if (m_banner_isSet) {
        obj.insert(QString("banner"), ::dc_rest::toJsonValue(m_banner));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::dc_rest::toJsonValue(m_description));
    }
    if (m_icon_isSet) {
        obj.insert(QString("icon"), ::dc_rest::toJsonValue(m_icon));
    }
    if (m_verification_level_isSet) {
        obj.insert(QString("verification_level"), ::dc_rest::toJsonValue(m_verification_level));
    }
    if (m_vanity_url_code_isSet) {
        obj.insert(QString("vanity_url_code"), ::dc_rest::toJsonValue(m_vanity_url_code));
    }
    if (m_nsfw_level_isSet) {
        obj.insert(QString("nsfw_level"), ::dc_rest::toJsonValue(m_nsfw_level));
    }
    if (m_nsfw_isSet) {
        obj.insert(QString("nsfw"), ::dc_rest::toJsonValue(m_nsfw));
    }
    if (m_premium_subscription_count_isSet) {
        obj.insert(QString("premium_subscription_count"), ::dc_rest::toJsonValue(m_premium_subscription_count));
    }
    return obj;
}

QString OAIInviteGuildResponse::getId() const {
    return m_id;
}
void OAIInviteGuildResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIInviteGuildResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIInviteGuildResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIInviteGuildResponse::getName() const {
    return m_name;
}
void OAIInviteGuildResponse::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIInviteGuildResponse::is_name_Set() const{
    return m_name_isSet;
}

bool OAIInviteGuildResponse::is_name_Valid() const{
    return m_name_isValid;
}

QSet<QString> OAIInviteGuildResponse::getFeatures() const {
    return m_features;
}
void OAIInviteGuildResponse::setFeatures(const QSet<QString> &features) {
    m_features = features;
    m_features_isSet = true;
}

bool OAIInviteGuildResponse::is_features_Set() const{
    return m_features_isSet;
}

bool OAIInviteGuildResponse::is_features_Valid() const{
    return m_features_isValid;
}

QString OAIInviteGuildResponse::getSplash() const {
    return m_splash;
}
void OAIInviteGuildResponse::setSplash(const QString &splash) {
    m_splash = splash;
    m_splash_isSet = true;
}

bool OAIInviteGuildResponse::is_splash_Set() const{
    return m_splash_isSet;
}

bool OAIInviteGuildResponse::is_splash_Valid() const{
    return m_splash_isValid;
}

QString OAIInviteGuildResponse::getBanner() const {
    return m_banner;
}
void OAIInviteGuildResponse::setBanner(const QString &banner) {
    m_banner = banner;
    m_banner_isSet = true;
}

bool OAIInviteGuildResponse::is_banner_Set() const{
    return m_banner_isSet;
}

bool OAIInviteGuildResponse::is_banner_Valid() const{
    return m_banner_isValid;
}

QString OAIInviteGuildResponse::getDescription() const {
    return m_description;
}
void OAIInviteGuildResponse::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIInviteGuildResponse::is_description_Set() const{
    return m_description_isSet;
}

bool OAIInviteGuildResponse::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIInviteGuildResponse::getIcon() const {
    return m_icon;
}
void OAIInviteGuildResponse::setIcon(const QString &icon) {
    m_icon = icon;
    m_icon_isSet = true;
}

bool OAIInviteGuildResponse::is_icon_Set() const{
    return m_icon_isSet;
}

bool OAIInviteGuildResponse::is_icon_Valid() const{
    return m_icon_isValid;
}

qint32 OAIInviteGuildResponse::getVerificationLevel() const {
    return m_verification_level;
}
void OAIInviteGuildResponse::setVerificationLevel(const qint32 &verification_level) {
    m_verification_level = verification_level;
    m_verification_level_isSet = true;
}

bool OAIInviteGuildResponse::is_verification_level_Set() const{
    return m_verification_level_isSet;
}

bool OAIInviteGuildResponse::is_verification_level_Valid() const{
    return m_verification_level_isValid;
}

QString OAIInviteGuildResponse::getVanityUrlCode() const {
    return m_vanity_url_code;
}
void OAIInviteGuildResponse::setVanityUrlCode(const QString &vanity_url_code) {
    m_vanity_url_code = vanity_url_code;
    m_vanity_url_code_isSet = true;
}

bool OAIInviteGuildResponse::is_vanity_url_code_Set() const{
    return m_vanity_url_code_isSet;
}

bool OAIInviteGuildResponse::is_vanity_url_code_Valid() const{
    return m_vanity_url_code_isValid;
}

qint32 OAIInviteGuildResponse::getNsfwLevel() const {
    return m_nsfw_level;
}
void OAIInviteGuildResponse::setNsfwLevel(const qint32 &nsfw_level) {
    m_nsfw_level = nsfw_level;
    m_nsfw_level_isSet = true;
}

bool OAIInviteGuildResponse::is_nsfw_level_Set() const{
    return m_nsfw_level_isSet;
}

bool OAIInviteGuildResponse::is_nsfw_level_Valid() const{
    return m_nsfw_level_isValid;
}

bool OAIInviteGuildResponse::isNsfw() const {
    return m_nsfw;
}
void OAIInviteGuildResponse::setNsfw(const bool &nsfw) {
    m_nsfw = nsfw;
    m_nsfw_isSet = true;
}

bool OAIInviteGuildResponse::is_nsfw_Set() const{
    return m_nsfw_isSet;
}

bool OAIInviteGuildResponse::is_nsfw_Valid() const{
    return m_nsfw_isValid;
}

qint32 OAIInviteGuildResponse::getPremiumSubscriptionCount() const {
    return m_premium_subscription_count;
}
void OAIInviteGuildResponse::setPremiumSubscriptionCount(const qint32 &premium_subscription_count) {
    m_premium_subscription_count = premium_subscription_count;
    m_premium_subscription_count_isSet = true;
}

bool OAIInviteGuildResponse::is_premium_subscription_count_Set() const{
    return m_premium_subscription_count_isSet;
}

bool OAIInviteGuildResponse::is_premium_subscription_count_Valid() const{
    return m_premium_subscription_count_isValid;
}

bool OAIInviteGuildResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_features.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_splash_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_banner_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_icon_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_verification_level_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_vanity_url_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_nsfw_level_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_nsfw_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_premium_subscription_count_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIInviteGuildResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_name_isValid && m_features_isValid && true;
}

} // namespace dc_rest
