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

#include "OAIGuildResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIGuildResponse::OAIGuildResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGuildResponse::OAIGuildResponse() {
    this->initializeModel();
}

OAIGuildResponse::~OAIGuildResponse() {}

void OAIGuildResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_features_isSet = false;
    m_features_isValid = false;

    m_owner_id_isSet = false;
    m_owner_id_isValid = false;

    m_region_isSet = false;
    m_region_isValid = false;

    m_afk_timeout_isSet = false;
    m_afk_timeout_isValid = false;

    m_system_channel_flags_isSet = false;
    m_system_channel_flags_isValid = false;

    m_widget_enabled_isSet = false;
    m_widget_enabled_isValid = false;

    m_verification_level_isSet = false;
    m_verification_level_isValid = false;

    m_roles_isSet = false;
    m_roles_isValid = false;

    m_default_message_notifications_isSet = false;
    m_default_message_notifications_isValid = false;

    m_mfa_level_isSet = false;
    m_mfa_level_isValid = false;

    m_explicit_content_filter_isSet = false;
    m_explicit_content_filter_isValid = false;

    m_premium_tier_isSet = false;
    m_premium_tier_isValid = false;

    m_premium_subscription_count_isSet = false;
    m_premium_subscription_count_isValid = false;

    m_preferred_locale_isSet = false;
    m_preferred_locale_isValid = false;

    m_premium_progress_bar_enabled_isSet = false;
    m_premium_progress_bar_enabled_isValid = false;

    m_nsfw_isSet = false;
    m_nsfw_isValid = false;

    m_nsfw_level_isSet = false;
    m_nsfw_level_isValid = false;

    m_emojis_isSet = false;
    m_emojis_isValid = false;

    m_stickers_isSet = false;
    m_stickers_isValid = false;

    m_icon_isSet = false;
    m_icon_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_home_header_isSet = false;
    m_home_header_isValid = false;

    m_splash_isSet = false;
    m_splash_isValid = false;

    m_discovery_splash_isSet = false;
    m_discovery_splash_isValid = false;

    m_banner_isSet = false;
    m_banner_isValid = false;

    m_application_id_isSet = false;
    m_application_id_isValid = false;

    m_afk_channel_id_isSet = false;
    m_afk_channel_id_isValid = false;

    m_system_channel_id_isSet = false;
    m_system_channel_id_isValid = false;

    m_widget_channel_id_isSet = false;
    m_widget_channel_id_isValid = false;

    m_max_presences_isSet = false;
    m_max_presences_isValid = false;

    m_max_members_isSet = false;
    m_max_members_isValid = false;

    m_max_stage_video_channel_users_isSet = false;
    m_max_stage_video_channel_users_isValid = false;

    m_max_video_channel_users_isSet = false;
    m_max_video_channel_users_isValid = false;

    m_vanity_url_code_isSet = false;
    m_vanity_url_code_isValid = false;

    m_rules_channel_id_isSet = false;
    m_rules_channel_id_isValid = false;

    m_safety_alerts_channel_id_isSet = false;
    m_safety_alerts_channel_id_isValid = false;

    m_public_updates_channel_id_isSet = false;
    m_public_updates_channel_id_isValid = false;
}

void OAIGuildResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGuildResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_features_isValid = ::dc_rest::fromJsonValue(m_features, json[QString("features")]);
    m_features_isSet = !json[QString("features")].isNull() && m_features_isValid;

    m_owner_id_isValid = ::dc_rest::fromJsonValue(m_owner_id, json[QString("owner_id")]);
    m_owner_id_isSet = !json[QString("owner_id")].isNull() && m_owner_id_isValid;

    m_region_isValid = ::dc_rest::fromJsonValue(m_region, json[QString("region")]);
    m_region_isSet = !json[QString("region")].isNull() && m_region_isValid;

    m_afk_timeout_isValid = ::dc_rest::fromJsonValue(m_afk_timeout, json[QString("afk_timeout")]);
    m_afk_timeout_isSet = !json[QString("afk_timeout")].isNull() && m_afk_timeout_isValid;

    m_system_channel_flags_isValid = ::dc_rest::fromJsonValue(m_system_channel_flags, json[QString("system_channel_flags")]);
    m_system_channel_flags_isSet = !json[QString("system_channel_flags")].isNull() && m_system_channel_flags_isValid;

    m_widget_enabled_isValid = ::dc_rest::fromJsonValue(m_widget_enabled, json[QString("widget_enabled")]);
    m_widget_enabled_isSet = !json[QString("widget_enabled")].isNull() && m_widget_enabled_isValid;

    m_verification_level_isValid = ::dc_rest::fromJsonValue(m_verification_level, json[QString("verification_level")]);
    m_verification_level_isSet = !json[QString("verification_level")].isNull() && m_verification_level_isValid;

    m_roles_isValid = ::dc_rest::fromJsonValue(m_roles, json[QString("roles")]);
    m_roles_isSet = !json[QString("roles")].isNull() && m_roles_isValid;

    m_default_message_notifications_isValid = ::dc_rest::fromJsonValue(m_default_message_notifications, json[QString("default_message_notifications")]);
    m_default_message_notifications_isSet = !json[QString("default_message_notifications")].isNull() && m_default_message_notifications_isValid;

    m_mfa_level_isValid = ::dc_rest::fromJsonValue(m_mfa_level, json[QString("mfa_level")]);
    m_mfa_level_isSet = !json[QString("mfa_level")].isNull() && m_mfa_level_isValid;

    m_explicit_content_filter_isValid = ::dc_rest::fromJsonValue(m_explicit_content_filter, json[QString("explicit_content_filter")]);
    m_explicit_content_filter_isSet = !json[QString("explicit_content_filter")].isNull() && m_explicit_content_filter_isValid;

    m_premium_tier_isValid = ::dc_rest::fromJsonValue(m_premium_tier, json[QString("premium_tier")]);
    m_premium_tier_isSet = !json[QString("premium_tier")].isNull() && m_premium_tier_isValid;

    m_premium_subscription_count_isValid = ::dc_rest::fromJsonValue(m_premium_subscription_count, json[QString("premium_subscription_count")]);
    m_premium_subscription_count_isSet = !json[QString("premium_subscription_count")].isNull() && m_premium_subscription_count_isValid;

    m_preferred_locale_isValid = ::dc_rest::fromJsonValue(m_preferred_locale, json[QString("preferred_locale")]);
    m_preferred_locale_isSet = !json[QString("preferred_locale")].isNull() && m_preferred_locale_isValid;

    m_premium_progress_bar_enabled_isValid = ::dc_rest::fromJsonValue(m_premium_progress_bar_enabled, json[QString("premium_progress_bar_enabled")]);
    m_premium_progress_bar_enabled_isSet = !json[QString("premium_progress_bar_enabled")].isNull() && m_premium_progress_bar_enabled_isValid;

    m_nsfw_isValid = ::dc_rest::fromJsonValue(m_nsfw, json[QString("nsfw")]);
    m_nsfw_isSet = !json[QString("nsfw")].isNull() && m_nsfw_isValid;

    m_nsfw_level_isValid = ::dc_rest::fromJsonValue(m_nsfw_level, json[QString("nsfw_level")]);
    m_nsfw_level_isSet = !json[QString("nsfw_level")].isNull() && m_nsfw_level_isValid;

    m_emojis_isValid = ::dc_rest::fromJsonValue(m_emojis, json[QString("emojis")]);
    m_emojis_isSet = !json[QString("emojis")].isNull() && m_emojis_isValid;

    m_stickers_isValid = ::dc_rest::fromJsonValue(m_stickers, json[QString("stickers")]);
    m_stickers_isSet = !json[QString("stickers")].isNull() && m_stickers_isValid;

    m_icon_isValid = ::dc_rest::fromJsonValue(m_icon, json[QString("icon")]);
    m_icon_isSet = !json[QString("icon")].isNull() && m_icon_isValid;

    m_description_isValid = ::dc_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_home_header_isValid = ::dc_rest::fromJsonValue(m_home_header, json[QString("home_header")]);
    m_home_header_isSet = !json[QString("home_header")].isNull() && m_home_header_isValid;

    m_splash_isValid = ::dc_rest::fromJsonValue(m_splash, json[QString("splash")]);
    m_splash_isSet = !json[QString("splash")].isNull() && m_splash_isValid;

    m_discovery_splash_isValid = ::dc_rest::fromJsonValue(m_discovery_splash, json[QString("discovery_splash")]);
    m_discovery_splash_isSet = !json[QString("discovery_splash")].isNull() && m_discovery_splash_isValid;

    m_banner_isValid = ::dc_rest::fromJsonValue(m_banner, json[QString("banner")]);
    m_banner_isSet = !json[QString("banner")].isNull() && m_banner_isValid;

    m_application_id_isValid = ::dc_rest::fromJsonValue(m_application_id, json[QString("application_id")]);
    m_application_id_isSet = !json[QString("application_id")].isNull() && m_application_id_isValid;

    m_afk_channel_id_isValid = ::dc_rest::fromJsonValue(m_afk_channel_id, json[QString("afk_channel_id")]);
    m_afk_channel_id_isSet = !json[QString("afk_channel_id")].isNull() && m_afk_channel_id_isValid;

    m_system_channel_id_isValid = ::dc_rest::fromJsonValue(m_system_channel_id, json[QString("system_channel_id")]);
    m_system_channel_id_isSet = !json[QString("system_channel_id")].isNull() && m_system_channel_id_isValid;

    m_widget_channel_id_isValid = ::dc_rest::fromJsonValue(m_widget_channel_id, json[QString("widget_channel_id")]);
    m_widget_channel_id_isSet = !json[QString("widget_channel_id")].isNull() && m_widget_channel_id_isValid;

    m_max_presences_isValid = ::dc_rest::fromJsonValue(m_max_presences, json[QString("max_presences")]);
    m_max_presences_isSet = !json[QString("max_presences")].isNull() && m_max_presences_isValid;

    m_max_members_isValid = ::dc_rest::fromJsonValue(m_max_members, json[QString("max_members")]);
    m_max_members_isSet = !json[QString("max_members")].isNull() && m_max_members_isValid;

    m_max_stage_video_channel_users_isValid = ::dc_rest::fromJsonValue(m_max_stage_video_channel_users, json[QString("max_stage_video_channel_users")]);
    m_max_stage_video_channel_users_isSet = !json[QString("max_stage_video_channel_users")].isNull() && m_max_stage_video_channel_users_isValid;

    m_max_video_channel_users_isValid = ::dc_rest::fromJsonValue(m_max_video_channel_users, json[QString("max_video_channel_users")]);
    m_max_video_channel_users_isSet = !json[QString("max_video_channel_users")].isNull() && m_max_video_channel_users_isValid;

    m_vanity_url_code_isValid = ::dc_rest::fromJsonValue(m_vanity_url_code, json[QString("vanity_url_code")]);
    m_vanity_url_code_isSet = !json[QString("vanity_url_code")].isNull() && m_vanity_url_code_isValid;

    m_rules_channel_id_isValid = ::dc_rest::fromJsonValue(m_rules_channel_id, json[QString("rules_channel_id")]);
    m_rules_channel_id_isSet = !json[QString("rules_channel_id")].isNull() && m_rules_channel_id_isValid;

    m_safety_alerts_channel_id_isValid = ::dc_rest::fromJsonValue(m_safety_alerts_channel_id, json[QString("safety_alerts_channel_id")]);
    m_safety_alerts_channel_id_isSet = !json[QString("safety_alerts_channel_id")].isNull() && m_safety_alerts_channel_id_isValid;

    m_public_updates_channel_id_isValid = ::dc_rest::fromJsonValue(m_public_updates_channel_id, json[QString("public_updates_channel_id")]);
    m_public_updates_channel_id_isSet = !json[QString("public_updates_channel_id")].isNull() && m_public_updates_channel_id_isValid;
}

QString OAIGuildResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGuildResponse::asJsonObject() const {
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
    if (m_owner_id_isSet) {
        obj.insert(QString("owner_id"), ::dc_rest::toJsonValue(m_owner_id));
    }
    if (m_region_isSet) {
        obj.insert(QString("region"), ::dc_rest::toJsonValue(m_region));
    }
    if (m_afk_timeout_isSet) {
        obj.insert(QString("afk_timeout"), ::dc_rest::toJsonValue(m_afk_timeout));
    }
    if (m_system_channel_flags_isSet) {
        obj.insert(QString("system_channel_flags"), ::dc_rest::toJsonValue(m_system_channel_flags));
    }
    if (m_widget_enabled_isSet) {
        obj.insert(QString("widget_enabled"), ::dc_rest::toJsonValue(m_widget_enabled));
    }
    if (m_verification_level_isSet) {
        obj.insert(QString("verification_level"), ::dc_rest::toJsonValue(m_verification_level));
    }
    if (m_roles.size() > 0) {
        obj.insert(QString("roles"), ::dc_rest::toJsonValue(m_roles));
    }
    if (m_default_message_notifications_isSet) {
        obj.insert(QString("default_message_notifications"), ::dc_rest::toJsonValue(m_default_message_notifications));
    }
    if (m_mfa_level_isSet) {
        obj.insert(QString("mfa_level"), ::dc_rest::toJsonValue(m_mfa_level));
    }
    if (m_explicit_content_filter_isSet) {
        obj.insert(QString("explicit_content_filter"), ::dc_rest::toJsonValue(m_explicit_content_filter));
    }
    if (m_premium_tier_isSet) {
        obj.insert(QString("premium_tier"), ::dc_rest::toJsonValue(m_premium_tier));
    }
    if (m_premium_subscription_count_isSet) {
        obj.insert(QString("premium_subscription_count"), ::dc_rest::toJsonValue(m_premium_subscription_count));
    }
    if (m_preferred_locale_isSet) {
        obj.insert(QString("preferred_locale"), ::dc_rest::toJsonValue(m_preferred_locale));
    }
    if (m_premium_progress_bar_enabled_isSet) {
        obj.insert(QString("premium_progress_bar_enabled"), ::dc_rest::toJsonValue(m_premium_progress_bar_enabled));
    }
    if (m_nsfw_isSet) {
        obj.insert(QString("nsfw"), ::dc_rest::toJsonValue(m_nsfw));
    }
    if (m_nsfw_level_isSet) {
        obj.insert(QString("nsfw_level"), ::dc_rest::toJsonValue(m_nsfw_level));
    }
    if (m_emojis.size() > 0) {
        obj.insert(QString("emojis"), ::dc_rest::toJsonValue(m_emojis));
    }
    if (m_stickers.size() > 0) {
        obj.insert(QString("stickers"), ::dc_rest::toJsonValue(m_stickers));
    }
    if (m_icon_isSet) {
        obj.insert(QString("icon"), ::dc_rest::toJsonValue(m_icon));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::dc_rest::toJsonValue(m_description));
    }
    if (m_home_header_isSet) {
        obj.insert(QString("home_header"), ::dc_rest::toJsonValue(m_home_header));
    }
    if (m_splash_isSet) {
        obj.insert(QString("splash"), ::dc_rest::toJsonValue(m_splash));
    }
    if (m_discovery_splash_isSet) {
        obj.insert(QString("discovery_splash"), ::dc_rest::toJsonValue(m_discovery_splash));
    }
    if (m_banner_isSet) {
        obj.insert(QString("banner"), ::dc_rest::toJsonValue(m_banner));
    }
    if (m_application_id_isSet) {
        obj.insert(QString("application_id"), ::dc_rest::toJsonValue(m_application_id));
    }
    if (m_afk_channel_id_isSet) {
        obj.insert(QString("afk_channel_id"), ::dc_rest::toJsonValue(m_afk_channel_id));
    }
    if (m_system_channel_id_isSet) {
        obj.insert(QString("system_channel_id"), ::dc_rest::toJsonValue(m_system_channel_id));
    }
    if (m_widget_channel_id_isSet) {
        obj.insert(QString("widget_channel_id"), ::dc_rest::toJsonValue(m_widget_channel_id));
    }
    if (m_max_presences_isSet) {
        obj.insert(QString("max_presences"), ::dc_rest::toJsonValue(m_max_presences));
    }
    if (m_max_members_isSet) {
        obj.insert(QString("max_members"), ::dc_rest::toJsonValue(m_max_members));
    }
    if (m_max_stage_video_channel_users_isSet) {
        obj.insert(QString("max_stage_video_channel_users"), ::dc_rest::toJsonValue(m_max_stage_video_channel_users));
    }
    if (m_max_video_channel_users_isSet) {
        obj.insert(QString("max_video_channel_users"), ::dc_rest::toJsonValue(m_max_video_channel_users));
    }
    if (m_vanity_url_code_isSet) {
        obj.insert(QString("vanity_url_code"), ::dc_rest::toJsonValue(m_vanity_url_code));
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
    return obj;
}

QString OAIGuildResponse::getId() const {
    return m_id;
}
void OAIGuildResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIGuildResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIGuildResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIGuildResponse::getName() const {
    return m_name;
}
void OAIGuildResponse::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIGuildResponse::is_name_Set() const{
    return m_name_isSet;
}

bool OAIGuildResponse::is_name_Valid() const{
    return m_name_isValid;
}

QSet<QString> OAIGuildResponse::getFeatures() const {
    return m_features;
}
void OAIGuildResponse::setFeatures(const QSet<QString> &features) {
    m_features = features;
    m_features_isSet = true;
}

bool OAIGuildResponse::is_features_Set() const{
    return m_features_isSet;
}

bool OAIGuildResponse::is_features_Valid() const{
    return m_features_isValid;
}

QString OAIGuildResponse::getOwnerId() const {
    return m_owner_id;
}
void OAIGuildResponse::setOwnerId(const QString &owner_id) {
    m_owner_id = owner_id;
    m_owner_id_isSet = true;
}

bool OAIGuildResponse::is_owner_id_Set() const{
    return m_owner_id_isSet;
}

bool OAIGuildResponse::is_owner_id_Valid() const{
    return m_owner_id_isValid;
}

QString OAIGuildResponse::getRegion() const {
    return m_region;
}
void OAIGuildResponse::setRegion(const QString &region) {
    m_region = region;
    m_region_isSet = true;
}

bool OAIGuildResponse::is_region_Set() const{
    return m_region_isSet;
}

bool OAIGuildResponse::is_region_Valid() const{
    return m_region_isValid;
}

qint32 OAIGuildResponse::getAfkTimeout() const {
    return m_afk_timeout;
}
void OAIGuildResponse::setAfkTimeout(const qint32 &afk_timeout) {
    m_afk_timeout = afk_timeout;
    m_afk_timeout_isSet = true;
}

bool OAIGuildResponse::is_afk_timeout_Set() const{
    return m_afk_timeout_isSet;
}

bool OAIGuildResponse::is_afk_timeout_Valid() const{
    return m_afk_timeout_isValid;
}

qint32 OAIGuildResponse::getSystemChannelFlags() const {
    return m_system_channel_flags;
}
void OAIGuildResponse::setSystemChannelFlags(const qint32 &system_channel_flags) {
    m_system_channel_flags = system_channel_flags;
    m_system_channel_flags_isSet = true;
}

bool OAIGuildResponse::is_system_channel_flags_Set() const{
    return m_system_channel_flags_isSet;
}

bool OAIGuildResponse::is_system_channel_flags_Valid() const{
    return m_system_channel_flags_isValid;
}

bool OAIGuildResponse::isWidgetEnabled() const {
    return m_widget_enabled;
}
void OAIGuildResponse::setWidgetEnabled(const bool &widget_enabled) {
    m_widget_enabled = widget_enabled;
    m_widget_enabled_isSet = true;
}

bool OAIGuildResponse::is_widget_enabled_Set() const{
    return m_widget_enabled_isSet;
}

bool OAIGuildResponse::is_widget_enabled_Valid() const{
    return m_widget_enabled_isValid;
}

qint32 OAIGuildResponse::getVerificationLevel() const {
    return m_verification_level;
}
void OAIGuildResponse::setVerificationLevel(const qint32 &verification_level) {
    m_verification_level = verification_level;
    m_verification_level_isSet = true;
}

bool OAIGuildResponse::is_verification_level_Set() const{
    return m_verification_level_isSet;
}

bool OAIGuildResponse::is_verification_level_Valid() const{
    return m_verification_level_isValid;
}

QList<OAIGuildRoleResponse> OAIGuildResponse::getRoles() const {
    return m_roles;
}
void OAIGuildResponse::setRoles(const QList<OAIGuildRoleResponse> &roles) {
    m_roles = roles;
    m_roles_isSet = true;
}

bool OAIGuildResponse::is_roles_Set() const{
    return m_roles_isSet;
}

bool OAIGuildResponse::is_roles_Valid() const{
    return m_roles_isValid;
}

qint32 OAIGuildResponse::getDefaultMessageNotifications() const {
    return m_default_message_notifications;
}
void OAIGuildResponse::setDefaultMessageNotifications(const qint32 &default_message_notifications) {
    m_default_message_notifications = default_message_notifications;
    m_default_message_notifications_isSet = true;
}

bool OAIGuildResponse::is_default_message_notifications_Set() const{
    return m_default_message_notifications_isSet;
}

bool OAIGuildResponse::is_default_message_notifications_Valid() const{
    return m_default_message_notifications_isValid;
}

qint32 OAIGuildResponse::getMfaLevel() const {
    return m_mfa_level;
}
void OAIGuildResponse::setMfaLevel(const qint32 &mfa_level) {
    m_mfa_level = mfa_level;
    m_mfa_level_isSet = true;
}

bool OAIGuildResponse::is_mfa_level_Set() const{
    return m_mfa_level_isSet;
}

bool OAIGuildResponse::is_mfa_level_Valid() const{
    return m_mfa_level_isValid;
}

qint32 OAIGuildResponse::getExplicitContentFilter() const {
    return m_explicit_content_filter;
}
void OAIGuildResponse::setExplicitContentFilter(const qint32 &explicit_content_filter) {
    m_explicit_content_filter = explicit_content_filter;
    m_explicit_content_filter_isSet = true;
}

bool OAIGuildResponse::is_explicit_content_filter_Set() const{
    return m_explicit_content_filter_isSet;
}

bool OAIGuildResponse::is_explicit_content_filter_Valid() const{
    return m_explicit_content_filter_isValid;
}

qint32 OAIGuildResponse::getPremiumTier() const {
    return m_premium_tier;
}
void OAIGuildResponse::setPremiumTier(const qint32 &premium_tier) {
    m_premium_tier = premium_tier;
    m_premium_tier_isSet = true;
}

bool OAIGuildResponse::is_premium_tier_Set() const{
    return m_premium_tier_isSet;
}

bool OAIGuildResponse::is_premium_tier_Valid() const{
    return m_premium_tier_isValid;
}

qint32 OAIGuildResponse::getPremiumSubscriptionCount() const {
    return m_premium_subscription_count;
}
void OAIGuildResponse::setPremiumSubscriptionCount(const qint32 &premium_subscription_count) {
    m_premium_subscription_count = premium_subscription_count;
    m_premium_subscription_count_isSet = true;
}

bool OAIGuildResponse::is_premium_subscription_count_Set() const{
    return m_premium_subscription_count_isSet;
}

bool OAIGuildResponse::is_premium_subscription_count_Valid() const{
    return m_premium_subscription_count_isValid;
}

QString OAIGuildResponse::getPreferredLocale() const {
    return m_preferred_locale;
}
void OAIGuildResponse::setPreferredLocale(const QString &preferred_locale) {
    m_preferred_locale = preferred_locale;
    m_preferred_locale_isSet = true;
}

bool OAIGuildResponse::is_preferred_locale_Set() const{
    return m_preferred_locale_isSet;
}

bool OAIGuildResponse::is_preferred_locale_Valid() const{
    return m_preferred_locale_isValid;
}

bool OAIGuildResponse::isPremiumProgressBarEnabled() const {
    return m_premium_progress_bar_enabled;
}
void OAIGuildResponse::setPremiumProgressBarEnabled(const bool &premium_progress_bar_enabled) {
    m_premium_progress_bar_enabled = premium_progress_bar_enabled;
    m_premium_progress_bar_enabled_isSet = true;
}

bool OAIGuildResponse::is_premium_progress_bar_enabled_Set() const{
    return m_premium_progress_bar_enabled_isSet;
}

bool OAIGuildResponse::is_premium_progress_bar_enabled_Valid() const{
    return m_premium_progress_bar_enabled_isValid;
}

bool OAIGuildResponse::isNsfw() const {
    return m_nsfw;
}
void OAIGuildResponse::setNsfw(const bool &nsfw) {
    m_nsfw = nsfw;
    m_nsfw_isSet = true;
}

bool OAIGuildResponse::is_nsfw_Set() const{
    return m_nsfw_isSet;
}

bool OAIGuildResponse::is_nsfw_Valid() const{
    return m_nsfw_isValid;
}

qint32 OAIGuildResponse::getNsfwLevel() const {
    return m_nsfw_level;
}
void OAIGuildResponse::setNsfwLevel(const qint32 &nsfw_level) {
    m_nsfw_level = nsfw_level;
    m_nsfw_level_isSet = true;
}

bool OAIGuildResponse::is_nsfw_level_Set() const{
    return m_nsfw_level_isSet;
}

bool OAIGuildResponse::is_nsfw_level_Valid() const{
    return m_nsfw_level_isValid;
}

QList<OAIEmojiResponse> OAIGuildResponse::getEmojis() const {
    return m_emojis;
}
void OAIGuildResponse::setEmojis(const QList<OAIEmojiResponse> &emojis) {
    m_emojis = emojis;
    m_emojis_isSet = true;
}

bool OAIGuildResponse::is_emojis_Set() const{
    return m_emojis_isSet;
}

bool OAIGuildResponse::is_emojis_Valid() const{
    return m_emojis_isValid;
}

QList<OAIGuildStickerResponse> OAIGuildResponse::getStickers() const {
    return m_stickers;
}
void OAIGuildResponse::setStickers(const QList<OAIGuildStickerResponse> &stickers) {
    m_stickers = stickers;
    m_stickers_isSet = true;
}

bool OAIGuildResponse::is_stickers_Set() const{
    return m_stickers_isSet;
}

bool OAIGuildResponse::is_stickers_Valid() const{
    return m_stickers_isValid;
}

QString OAIGuildResponse::getIcon() const {
    return m_icon;
}
void OAIGuildResponse::setIcon(const QString &icon) {
    m_icon = icon;
    m_icon_isSet = true;
}

bool OAIGuildResponse::is_icon_Set() const{
    return m_icon_isSet;
}

bool OAIGuildResponse::is_icon_Valid() const{
    return m_icon_isValid;
}

QString OAIGuildResponse::getDescription() const {
    return m_description;
}
void OAIGuildResponse::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIGuildResponse::is_description_Set() const{
    return m_description_isSet;
}

bool OAIGuildResponse::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIGuildResponse::getHomeHeader() const {
    return m_home_header;
}
void OAIGuildResponse::setHomeHeader(const QString &home_header) {
    m_home_header = home_header;
    m_home_header_isSet = true;
}

bool OAIGuildResponse::is_home_header_Set() const{
    return m_home_header_isSet;
}

bool OAIGuildResponse::is_home_header_Valid() const{
    return m_home_header_isValid;
}

QString OAIGuildResponse::getSplash() const {
    return m_splash;
}
void OAIGuildResponse::setSplash(const QString &splash) {
    m_splash = splash;
    m_splash_isSet = true;
}

bool OAIGuildResponse::is_splash_Set() const{
    return m_splash_isSet;
}

bool OAIGuildResponse::is_splash_Valid() const{
    return m_splash_isValid;
}

QString OAIGuildResponse::getDiscoverySplash() const {
    return m_discovery_splash;
}
void OAIGuildResponse::setDiscoverySplash(const QString &discovery_splash) {
    m_discovery_splash = discovery_splash;
    m_discovery_splash_isSet = true;
}

bool OAIGuildResponse::is_discovery_splash_Set() const{
    return m_discovery_splash_isSet;
}

bool OAIGuildResponse::is_discovery_splash_Valid() const{
    return m_discovery_splash_isValid;
}

QString OAIGuildResponse::getBanner() const {
    return m_banner;
}
void OAIGuildResponse::setBanner(const QString &banner) {
    m_banner = banner;
    m_banner_isSet = true;
}

bool OAIGuildResponse::is_banner_Set() const{
    return m_banner_isSet;
}

bool OAIGuildResponse::is_banner_Valid() const{
    return m_banner_isValid;
}

QString OAIGuildResponse::getApplicationId() const {
    return m_application_id;
}
void OAIGuildResponse::setApplicationId(const QString &application_id) {
    m_application_id = application_id;
    m_application_id_isSet = true;
}

bool OAIGuildResponse::is_application_id_Set() const{
    return m_application_id_isSet;
}

bool OAIGuildResponse::is_application_id_Valid() const{
    return m_application_id_isValid;
}

QString OAIGuildResponse::getAfkChannelId() const {
    return m_afk_channel_id;
}
void OAIGuildResponse::setAfkChannelId(const QString &afk_channel_id) {
    m_afk_channel_id = afk_channel_id;
    m_afk_channel_id_isSet = true;
}

bool OAIGuildResponse::is_afk_channel_id_Set() const{
    return m_afk_channel_id_isSet;
}

bool OAIGuildResponse::is_afk_channel_id_Valid() const{
    return m_afk_channel_id_isValid;
}

QString OAIGuildResponse::getSystemChannelId() const {
    return m_system_channel_id;
}
void OAIGuildResponse::setSystemChannelId(const QString &system_channel_id) {
    m_system_channel_id = system_channel_id;
    m_system_channel_id_isSet = true;
}

bool OAIGuildResponse::is_system_channel_id_Set() const{
    return m_system_channel_id_isSet;
}

bool OAIGuildResponse::is_system_channel_id_Valid() const{
    return m_system_channel_id_isValid;
}

QString OAIGuildResponse::getWidgetChannelId() const {
    return m_widget_channel_id;
}
void OAIGuildResponse::setWidgetChannelId(const QString &widget_channel_id) {
    m_widget_channel_id = widget_channel_id;
    m_widget_channel_id_isSet = true;
}

bool OAIGuildResponse::is_widget_channel_id_Set() const{
    return m_widget_channel_id_isSet;
}

bool OAIGuildResponse::is_widget_channel_id_Valid() const{
    return m_widget_channel_id_isValid;
}

qint32 OAIGuildResponse::getMaxPresences() const {
    return m_max_presences;
}
void OAIGuildResponse::setMaxPresences(const qint32 &max_presences) {
    m_max_presences = max_presences;
    m_max_presences_isSet = true;
}

bool OAIGuildResponse::is_max_presences_Set() const{
    return m_max_presences_isSet;
}

bool OAIGuildResponse::is_max_presences_Valid() const{
    return m_max_presences_isValid;
}

qint32 OAIGuildResponse::getMaxMembers() const {
    return m_max_members;
}
void OAIGuildResponse::setMaxMembers(const qint32 &max_members) {
    m_max_members = max_members;
    m_max_members_isSet = true;
}

bool OAIGuildResponse::is_max_members_Set() const{
    return m_max_members_isSet;
}

bool OAIGuildResponse::is_max_members_Valid() const{
    return m_max_members_isValid;
}

qint32 OAIGuildResponse::getMaxStageVideoChannelUsers() const {
    return m_max_stage_video_channel_users;
}
void OAIGuildResponse::setMaxStageVideoChannelUsers(const qint32 &max_stage_video_channel_users) {
    m_max_stage_video_channel_users = max_stage_video_channel_users;
    m_max_stage_video_channel_users_isSet = true;
}

bool OAIGuildResponse::is_max_stage_video_channel_users_Set() const{
    return m_max_stage_video_channel_users_isSet;
}

bool OAIGuildResponse::is_max_stage_video_channel_users_Valid() const{
    return m_max_stage_video_channel_users_isValid;
}

qint32 OAIGuildResponse::getMaxVideoChannelUsers() const {
    return m_max_video_channel_users;
}
void OAIGuildResponse::setMaxVideoChannelUsers(const qint32 &max_video_channel_users) {
    m_max_video_channel_users = max_video_channel_users;
    m_max_video_channel_users_isSet = true;
}

bool OAIGuildResponse::is_max_video_channel_users_Set() const{
    return m_max_video_channel_users_isSet;
}

bool OAIGuildResponse::is_max_video_channel_users_Valid() const{
    return m_max_video_channel_users_isValid;
}

QString OAIGuildResponse::getVanityUrlCode() const {
    return m_vanity_url_code;
}
void OAIGuildResponse::setVanityUrlCode(const QString &vanity_url_code) {
    m_vanity_url_code = vanity_url_code;
    m_vanity_url_code_isSet = true;
}

bool OAIGuildResponse::is_vanity_url_code_Set() const{
    return m_vanity_url_code_isSet;
}

bool OAIGuildResponse::is_vanity_url_code_Valid() const{
    return m_vanity_url_code_isValid;
}

QString OAIGuildResponse::getRulesChannelId() const {
    return m_rules_channel_id;
}
void OAIGuildResponse::setRulesChannelId(const QString &rules_channel_id) {
    m_rules_channel_id = rules_channel_id;
    m_rules_channel_id_isSet = true;
}

bool OAIGuildResponse::is_rules_channel_id_Set() const{
    return m_rules_channel_id_isSet;
}

bool OAIGuildResponse::is_rules_channel_id_Valid() const{
    return m_rules_channel_id_isValid;
}

QString OAIGuildResponse::getSafetyAlertsChannelId() const {
    return m_safety_alerts_channel_id;
}
void OAIGuildResponse::setSafetyAlertsChannelId(const QString &safety_alerts_channel_id) {
    m_safety_alerts_channel_id = safety_alerts_channel_id;
    m_safety_alerts_channel_id_isSet = true;
}

bool OAIGuildResponse::is_safety_alerts_channel_id_Set() const{
    return m_safety_alerts_channel_id_isSet;
}

bool OAIGuildResponse::is_safety_alerts_channel_id_Valid() const{
    return m_safety_alerts_channel_id_isValid;
}

QString OAIGuildResponse::getPublicUpdatesChannelId() const {
    return m_public_updates_channel_id;
}
void OAIGuildResponse::setPublicUpdatesChannelId(const QString &public_updates_channel_id) {
    m_public_updates_channel_id = public_updates_channel_id;
    m_public_updates_channel_id_isSet = true;
}

bool OAIGuildResponse::is_public_updates_channel_id_Set() const{
    return m_public_updates_channel_id_isSet;
}

bool OAIGuildResponse::is_public_updates_channel_id_Valid() const{
    return m_public_updates_channel_id_isValid;
}

bool OAIGuildResponse::isSet() const {
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

        if (m_owner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_region_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_afk_timeout_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_system_channel_flags_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_widget_enabled_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_verification_level_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_roles.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_default_message_notifications_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_mfa_level_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_explicit_content_filter_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_premium_tier_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_premium_subscription_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_preferred_locale_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_premium_progress_bar_enabled_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_nsfw_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_nsfw_level_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_emojis.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_stickers.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_icon_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_home_header_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_splash_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_discovery_splash_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_banner_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_application_id_isSet) {
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

        if (m_widget_channel_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_max_presences_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_max_members_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_max_stage_video_channel_users_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_max_video_channel_users_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_vanity_url_code_isSet) {
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
    } while (false);
    return isObjectUpdated;
}

bool OAIGuildResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_name_isValid && m_features_isValid && m_owner_id_isValid && m_region_isValid && m_afk_timeout_isValid && m_system_channel_flags_isValid && m_widget_enabled_isValid && m_verification_level_isValid && m_roles_isValid && m_default_message_notifications_isValid && m_mfa_level_isValid && m_explicit_content_filter_isValid && m_premium_tier_isValid && m_premium_subscription_count_isValid && m_preferred_locale_isValid && m_premium_progress_bar_enabled_isValid && m_nsfw_isValid && m_nsfw_level_isValid && m_emojis_isValid && m_stickers_isValid && true;
}

} // namespace dc_rest
