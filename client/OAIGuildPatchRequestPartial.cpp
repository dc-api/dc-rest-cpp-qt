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

#include "OAIGuildPatchRequestPartial.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIGuildPatchRequestPartial::OAIGuildPatchRequestPartial(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGuildPatchRequestPartial::OAIGuildPatchRequestPartial() {
    this->initializeModel();
}

OAIGuildPatchRequestPartial::~OAIGuildPatchRequestPartial() {}

void OAIGuildPatchRequestPartial::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_region_isSet = false;
    m_region_isValid = false;

    m_icon_isSet = false;
    m_icon_isValid = false;

    m_verification_level_isSet = false;
    m_verification_level_isValid = false;

    m_default_message_notifications_isSet = false;
    m_default_message_notifications_isValid = false;

    m_explicit_content_filter_isSet = false;
    m_explicit_content_filter_isValid = false;

    m_preferred_locale_isSet = false;
    m_preferred_locale_isValid = false;

    m_afk_timeout_isSet = false;
    m_afk_timeout_isValid = false;

    m_afk_channel_id_isSet = false;
    m_afk_channel_id_isValid = false;

    m_system_channel_id_isSet = false;
    m_system_channel_id_isValid = false;

    m_owner_id_isSet = false;
    m_owner_id_isValid = false;

    m_splash_isSet = false;
    m_splash_isValid = false;

    m_banner_isSet = false;
    m_banner_isValid = false;

    m_system_channel_flags_isSet = false;
    m_system_channel_flags_isValid = false;

    m_features_isSet = false;
    m_features_isValid = false;

    m_discovery_splash_isSet = false;
    m_discovery_splash_isValid = false;

    m_home_header_isSet = false;
    m_home_header_isValid = false;

    m_rules_channel_id_isSet = false;
    m_rules_channel_id_isValid = false;

    m_safety_alerts_channel_id_isSet = false;
    m_safety_alerts_channel_id_isValid = false;

    m_public_updates_channel_id_isSet = false;
    m_public_updates_channel_id_isValid = false;

    m_premium_progress_bar_enabled_isSet = false;
    m_premium_progress_bar_enabled_isValid = false;
}

void OAIGuildPatchRequestPartial::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGuildPatchRequestPartial::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_description_isValid = ::dc_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_region_isValid = ::dc_rest::fromJsonValue(m_region, json[QString("region")]);
    m_region_isSet = !json[QString("region")].isNull() && m_region_isValid;

    m_icon_isValid = ::dc_rest::fromJsonValue(m_icon, json[QString("icon")]);
    m_icon_isSet = !json[QString("icon")].isNull() && m_icon_isValid;

    m_verification_level_isValid = ::dc_rest::fromJsonValue(m_verification_level, json[QString("verification_level")]);
    m_verification_level_isSet = !json[QString("verification_level")].isNull() && m_verification_level_isValid;

    m_default_message_notifications_isValid = ::dc_rest::fromJsonValue(m_default_message_notifications, json[QString("default_message_notifications")]);
    m_default_message_notifications_isSet = !json[QString("default_message_notifications")].isNull() && m_default_message_notifications_isValid;

    m_explicit_content_filter_isValid = ::dc_rest::fromJsonValue(m_explicit_content_filter, json[QString("explicit_content_filter")]);
    m_explicit_content_filter_isSet = !json[QString("explicit_content_filter")].isNull() && m_explicit_content_filter_isValid;

    m_preferred_locale_isValid = ::dc_rest::fromJsonValue(m_preferred_locale, json[QString("preferred_locale")]);
    m_preferred_locale_isSet = !json[QString("preferred_locale")].isNull() && m_preferred_locale_isValid;

    m_afk_timeout_isValid = ::dc_rest::fromJsonValue(m_afk_timeout, json[QString("afk_timeout")]);
    m_afk_timeout_isSet = !json[QString("afk_timeout")].isNull() && m_afk_timeout_isValid;

    m_afk_channel_id_isValid = ::dc_rest::fromJsonValue(m_afk_channel_id, json[QString("afk_channel_id")]);
    m_afk_channel_id_isSet = !json[QString("afk_channel_id")].isNull() && m_afk_channel_id_isValid;

    m_system_channel_id_isValid = ::dc_rest::fromJsonValue(m_system_channel_id, json[QString("system_channel_id")]);
    m_system_channel_id_isSet = !json[QString("system_channel_id")].isNull() && m_system_channel_id_isValid;

    m_owner_id_isValid = ::dc_rest::fromJsonValue(m_owner_id, json[QString("owner_id")]);
    m_owner_id_isSet = !json[QString("owner_id")].isNull() && m_owner_id_isValid;

    m_splash_isValid = ::dc_rest::fromJsonValue(m_splash, json[QString("splash")]);
    m_splash_isSet = !json[QString("splash")].isNull() && m_splash_isValid;

    m_banner_isValid = ::dc_rest::fromJsonValue(m_banner, json[QString("banner")]);
    m_banner_isSet = !json[QString("banner")].isNull() && m_banner_isValid;

    m_system_channel_flags_isValid = ::dc_rest::fromJsonValue(m_system_channel_flags, json[QString("system_channel_flags")]);
    m_system_channel_flags_isSet = !json[QString("system_channel_flags")].isNull() && m_system_channel_flags_isValid;

    m_features_isValid = ::dc_rest::fromJsonValue(m_features, json[QString("features")]);
    m_features_isSet = !json[QString("features")].isNull() && m_features_isValid;

    m_discovery_splash_isValid = ::dc_rest::fromJsonValue(m_discovery_splash, json[QString("discovery_splash")]);
    m_discovery_splash_isSet = !json[QString("discovery_splash")].isNull() && m_discovery_splash_isValid;

    m_home_header_isValid = ::dc_rest::fromJsonValue(m_home_header, json[QString("home_header")]);
    m_home_header_isSet = !json[QString("home_header")].isNull() && m_home_header_isValid;

    m_rules_channel_id_isValid = ::dc_rest::fromJsonValue(m_rules_channel_id, json[QString("rules_channel_id")]);
    m_rules_channel_id_isSet = !json[QString("rules_channel_id")].isNull() && m_rules_channel_id_isValid;

    m_safety_alerts_channel_id_isValid = ::dc_rest::fromJsonValue(m_safety_alerts_channel_id, json[QString("safety_alerts_channel_id")]);
    m_safety_alerts_channel_id_isSet = !json[QString("safety_alerts_channel_id")].isNull() && m_safety_alerts_channel_id_isValid;

    m_public_updates_channel_id_isValid = ::dc_rest::fromJsonValue(m_public_updates_channel_id, json[QString("public_updates_channel_id")]);
    m_public_updates_channel_id_isSet = !json[QString("public_updates_channel_id")].isNull() && m_public_updates_channel_id_isValid;

    m_premium_progress_bar_enabled_isValid = ::dc_rest::fromJsonValue(m_premium_progress_bar_enabled, json[QString("premium_progress_bar_enabled")]);
    m_premium_progress_bar_enabled_isSet = !json[QString("premium_progress_bar_enabled")].isNull() && m_premium_progress_bar_enabled_isValid;
}

QString OAIGuildPatchRequestPartial::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGuildPatchRequestPartial::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::dc_rest::toJsonValue(m_description));
    }
    if (m_region_isSet) {
        obj.insert(QString("region"), ::dc_rest::toJsonValue(m_region));
    }
    if (m_icon_isSet) {
        obj.insert(QString("icon"), ::dc_rest::toJsonValue(m_icon));
    }
    if (m_verification_level_isSet) {
        obj.insert(QString("verification_level"), ::dc_rest::toJsonValue(m_verification_level));
    }
    if (m_default_message_notifications_isSet) {
        obj.insert(QString("default_message_notifications"), ::dc_rest::toJsonValue(m_default_message_notifications));
    }
    if (m_explicit_content_filter_isSet) {
        obj.insert(QString("explicit_content_filter"), ::dc_rest::toJsonValue(m_explicit_content_filter));
    }
    if (m_preferred_locale_isSet) {
        obj.insert(QString("preferred_locale"), ::dc_rest::toJsonValue(m_preferred_locale));
    }
    if (m_afk_timeout_isSet) {
        obj.insert(QString("afk_timeout"), ::dc_rest::toJsonValue(m_afk_timeout));
    }
    if (m_afk_channel_id_isSet) {
        obj.insert(QString("afk_channel_id"), ::dc_rest::toJsonValue(m_afk_channel_id));
    }
    if (m_system_channel_id_isSet) {
        obj.insert(QString("system_channel_id"), ::dc_rest::toJsonValue(m_system_channel_id));
    }
    if (m_owner_id_isSet) {
        obj.insert(QString("owner_id"), ::dc_rest::toJsonValue(m_owner_id));
    }
    if (m_splash_isSet) {
        obj.insert(QString("splash"), ::dc_rest::toJsonValue(m_splash));
    }
    if (m_banner_isSet) {
        obj.insert(QString("banner"), ::dc_rest::toJsonValue(m_banner));
    }
    if (m_system_channel_flags_isSet) {
        obj.insert(QString("system_channel_flags"), ::dc_rest::toJsonValue(m_system_channel_flags));
    }
    if (m_features.size() > 0) {
        obj.insert(QString("features"), ::dc_rest::toJsonValue(m_features));
    }
    if (m_discovery_splash_isSet) {
        obj.insert(QString("discovery_splash"), ::dc_rest::toJsonValue(m_discovery_splash));
    }
    if (m_home_header_isSet) {
        obj.insert(QString("home_header"), ::dc_rest::toJsonValue(m_home_header));
    }
    if (m_rules_channel_id_isSet) {
        obj.insert(QString("rules_channel_id"), ::dc_rest::toJsonValue(m_rules_channel_id));
    }
    if (m_safety_alerts_channel_id_isSet) {
        obj.insert(QString("safety_alerts_channel_id"), ::dc_rest::toJsonValue(m_safety_alerts_channel_id));
    }
    if (m_public_updates_channel_id_isSet) {
        obj.insert(QString("public_updates_channel_id"), ::dc_rest::toJsonValue(m_public_updates_channel_id));
    }
    if (m_premium_progress_bar_enabled_isSet) {
        obj.insert(QString("premium_progress_bar_enabled"), ::dc_rest::toJsonValue(m_premium_progress_bar_enabled));
    }
    return obj;
}

QString OAIGuildPatchRequestPartial::getName() const {
    return m_name;
}
void OAIGuildPatchRequestPartial::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIGuildPatchRequestPartial::is_name_Set() const{
    return m_name_isSet;
}

bool OAIGuildPatchRequestPartial::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIGuildPatchRequestPartial::getDescription() const {
    return m_description;
}
void OAIGuildPatchRequestPartial::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIGuildPatchRequestPartial::is_description_Set() const{
    return m_description_isSet;
}

bool OAIGuildPatchRequestPartial::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIGuildPatchRequestPartial::getRegion() const {
    return m_region;
}
void OAIGuildPatchRequestPartial::setRegion(const QString &region) {
    m_region = region;
    m_region_isSet = true;
}

bool OAIGuildPatchRequestPartial::is_region_Set() const{
    return m_region_isSet;
}

bool OAIGuildPatchRequestPartial::is_region_Valid() const{
    return m_region_isValid;
}

QString OAIGuildPatchRequestPartial::getIcon() const {
    return m_icon;
}
void OAIGuildPatchRequestPartial::setIcon(const QString &icon) {
    m_icon = icon;
    m_icon_isSet = true;
}

bool OAIGuildPatchRequestPartial::is_icon_Set() const{
    return m_icon_isSet;
}

bool OAIGuildPatchRequestPartial::is_icon_Valid() const{
    return m_icon_isValid;
}

qint32 OAIGuildPatchRequestPartial::getVerificationLevel() const {
    return m_verification_level;
}
void OAIGuildPatchRequestPartial::setVerificationLevel(const qint32 &verification_level) {
    m_verification_level = verification_level;
    m_verification_level_isSet = true;
}

bool OAIGuildPatchRequestPartial::is_verification_level_Set() const{
    return m_verification_level_isSet;
}

bool OAIGuildPatchRequestPartial::is_verification_level_Valid() const{
    return m_verification_level_isValid;
}

qint32 OAIGuildPatchRequestPartial::getDefaultMessageNotifications() const {
    return m_default_message_notifications;
}
void OAIGuildPatchRequestPartial::setDefaultMessageNotifications(const qint32 &default_message_notifications) {
    m_default_message_notifications = default_message_notifications;
    m_default_message_notifications_isSet = true;
}

bool OAIGuildPatchRequestPartial::is_default_message_notifications_Set() const{
    return m_default_message_notifications_isSet;
}

bool OAIGuildPatchRequestPartial::is_default_message_notifications_Valid() const{
    return m_default_message_notifications_isValid;
}

qint32 OAIGuildPatchRequestPartial::getExplicitContentFilter() const {
    return m_explicit_content_filter;
}
void OAIGuildPatchRequestPartial::setExplicitContentFilter(const qint32 &explicit_content_filter) {
    m_explicit_content_filter = explicit_content_filter;
    m_explicit_content_filter_isSet = true;
}

bool OAIGuildPatchRequestPartial::is_explicit_content_filter_Set() const{
    return m_explicit_content_filter_isSet;
}

bool OAIGuildPatchRequestPartial::is_explicit_content_filter_Valid() const{
    return m_explicit_content_filter_isValid;
}

QString OAIGuildPatchRequestPartial::getPreferredLocale() const {
    return m_preferred_locale;
}
void OAIGuildPatchRequestPartial::setPreferredLocale(const QString &preferred_locale) {
    m_preferred_locale = preferred_locale;
    m_preferred_locale_isSet = true;
}

bool OAIGuildPatchRequestPartial::is_preferred_locale_Set() const{
    return m_preferred_locale_isSet;
}

bool OAIGuildPatchRequestPartial::is_preferred_locale_Valid() const{
    return m_preferred_locale_isValid;
}

qint32 OAIGuildPatchRequestPartial::getAfkTimeout() const {
    return m_afk_timeout;
}
void OAIGuildPatchRequestPartial::setAfkTimeout(const qint32 &afk_timeout) {
    m_afk_timeout = afk_timeout;
    m_afk_timeout_isSet = true;
}

bool OAIGuildPatchRequestPartial::is_afk_timeout_Set() const{
    return m_afk_timeout_isSet;
}

bool OAIGuildPatchRequestPartial::is_afk_timeout_Valid() const{
    return m_afk_timeout_isValid;
}

QString OAIGuildPatchRequestPartial::getAfkChannelId() const {
    return m_afk_channel_id;
}
void OAIGuildPatchRequestPartial::setAfkChannelId(const QString &afk_channel_id) {
    m_afk_channel_id = afk_channel_id;
    m_afk_channel_id_isSet = true;
}

bool OAIGuildPatchRequestPartial::is_afk_channel_id_Set() const{
    return m_afk_channel_id_isSet;
}

bool OAIGuildPatchRequestPartial::is_afk_channel_id_Valid() const{
    return m_afk_channel_id_isValid;
}

QString OAIGuildPatchRequestPartial::getSystemChannelId() const {
    return m_system_channel_id;
}
void OAIGuildPatchRequestPartial::setSystemChannelId(const QString &system_channel_id) {
    m_system_channel_id = system_channel_id;
    m_system_channel_id_isSet = true;
}

bool OAIGuildPatchRequestPartial::is_system_channel_id_Set() const{
    return m_system_channel_id_isSet;
}

bool OAIGuildPatchRequestPartial::is_system_channel_id_Valid() const{
    return m_system_channel_id_isValid;
}

QString OAIGuildPatchRequestPartial::getOwnerId() const {
    return m_owner_id;
}
void OAIGuildPatchRequestPartial::setOwnerId(const QString &owner_id) {
    m_owner_id = owner_id;
    m_owner_id_isSet = true;
}

bool OAIGuildPatchRequestPartial::is_owner_id_Set() const{
    return m_owner_id_isSet;
}

bool OAIGuildPatchRequestPartial::is_owner_id_Valid() const{
    return m_owner_id_isValid;
}

QString OAIGuildPatchRequestPartial::getSplash() const {
    return m_splash;
}
void OAIGuildPatchRequestPartial::setSplash(const QString &splash) {
    m_splash = splash;
    m_splash_isSet = true;
}

bool OAIGuildPatchRequestPartial::is_splash_Set() const{
    return m_splash_isSet;
}

bool OAIGuildPatchRequestPartial::is_splash_Valid() const{
    return m_splash_isValid;
}

QString OAIGuildPatchRequestPartial::getBanner() const {
    return m_banner;
}
void OAIGuildPatchRequestPartial::setBanner(const QString &banner) {
    m_banner = banner;
    m_banner_isSet = true;
}

bool OAIGuildPatchRequestPartial::is_banner_Set() const{
    return m_banner_isSet;
}

bool OAIGuildPatchRequestPartial::is_banner_Valid() const{
    return m_banner_isValid;
}

qint32 OAIGuildPatchRequestPartial::getSystemChannelFlags() const {
    return m_system_channel_flags;
}
void OAIGuildPatchRequestPartial::setSystemChannelFlags(const qint32 &system_channel_flags) {
    m_system_channel_flags = system_channel_flags;
    m_system_channel_flags_isSet = true;
}

bool OAIGuildPatchRequestPartial::is_system_channel_flags_Set() const{
    return m_system_channel_flags_isSet;
}

bool OAIGuildPatchRequestPartial::is_system_channel_flags_Valid() const{
    return m_system_channel_flags_isValid;
}

QSet<QString> OAIGuildPatchRequestPartial::getFeatures() const {
    return m_features;
}
void OAIGuildPatchRequestPartial::setFeatures(const QSet<QString> &features) {
    m_features = features;
    m_features_isSet = true;
}

bool OAIGuildPatchRequestPartial::is_features_Set() const{
    return m_features_isSet;
}

bool OAIGuildPatchRequestPartial::is_features_Valid() const{
    return m_features_isValid;
}

QString OAIGuildPatchRequestPartial::getDiscoverySplash() const {
    return m_discovery_splash;
}
void OAIGuildPatchRequestPartial::setDiscoverySplash(const QString &discovery_splash) {
    m_discovery_splash = discovery_splash;
    m_discovery_splash_isSet = true;
}

bool OAIGuildPatchRequestPartial::is_discovery_splash_Set() const{
    return m_discovery_splash_isSet;
}

bool OAIGuildPatchRequestPartial::is_discovery_splash_Valid() const{
    return m_discovery_splash_isValid;
}

QString OAIGuildPatchRequestPartial::getHomeHeader() const {
    return m_home_header;
}
void OAIGuildPatchRequestPartial::setHomeHeader(const QString &home_header) {
    m_home_header = home_header;
    m_home_header_isSet = true;
}

bool OAIGuildPatchRequestPartial::is_home_header_Set() const{
    return m_home_header_isSet;
}

bool OAIGuildPatchRequestPartial::is_home_header_Valid() const{
    return m_home_header_isValid;
}

QString OAIGuildPatchRequestPartial::getRulesChannelId() const {
    return m_rules_channel_id;
}
void OAIGuildPatchRequestPartial::setRulesChannelId(const QString &rules_channel_id) {
    m_rules_channel_id = rules_channel_id;
    m_rules_channel_id_isSet = true;
}

bool OAIGuildPatchRequestPartial::is_rules_channel_id_Set() const{
    return m_rules_channel_id_isSet;
}

bool OAIGuildPatchRequestPartial::is_rules_channel_id_Valid() const{
    return m_rules_channel_id_isValid;
}

QString OAIGuildPatchRequestPartial::getSafetyAlertsChannelId() const {
    return m_safety_alerts_channel_id;
}
void OAIGuildPatchRequestPartial::setSafetyAlertsChannelId(const QString &safety_alerts_channel_id) {
    m_safety_alerts_channel_id = safety_alerts_channel_id;
    m_safety_alerts_channel_id_isSet = true;
}

bool OAIGuildPatchRequestPartial::is_safety_alerts_channel_id_Set() const{
    return m_safety_alerts_channel_id_isSet;
}

bool OAIGuildPatchRequestPartial::is_safety_alerts_channel_id_Valid() const{
    return m_safety_alerts_channel_id_isValid;
}

QString OAIGuildPatchRequestPartial::getPublicUpdatesChannelId() const {
    return m_public_updates_channel_id;
}
void OAIGuildPatchRequestPartial::setPublicUpdatesChannelId(const QString &public_updates_channel_id) {
    m_public_updates_channel_id = public_updates_channel_id;
    m_public_updates_channel_id_isSet = true;
}

bool OAIGuildPatchRequestPartial::is_public_updates_channel_id_Set() const{
    return m_public_updates_channel_id_isSet;
}

bool OAIGuildPatchRequestPartial::is_public_updates_channel_id_Valid() const{
    return m_public_updates_channel_id_isValid;
}

bool OAIGuildPatchRequestPartial::isPremiumProgressBarEnabled() const {
    return m_premium_progress_bar_enabled;
}
void OAIGuildPatchRequestPartial::setPremiumProgressBarEnabled(const bool &premium_progress_bar_enabled) {
    m_premium_progress_bar_enabled = premium_progress_bar_enabled;
    m_premium_progress_bar_enabled_isSet = true;
}

bool OAIGuildPatchRequestPartial::is_premium_progress_bar_enabled_Set() const{
    return m_premium_progress_bar_enabled_isSet;
}

bool OAIGuildPatchRequestPartial::is_premium_progress_bar_enabled_Valid() const{
    return m_premium_progress_bar_enabled_isValid;
}

bool OAIGuildPatchRequestPartial::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_region_isSet) {
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

        if (m_default_message_notifications_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_explicit_content_filter_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_preferred_locale_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_afk_timeout_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_afk_channel_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_system_channel_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_owner_id_isSet) {
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

        if (m_system_channel_flags_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_features.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_discovery_splash_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_home_header_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_rules_channel_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_safety_alerts_channel_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_public_updates_channel_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_premium_progress_bar_enabled_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGuildPatchRequestPartial::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace dc_rest
