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

#include "OAIGuildWithCountsResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIGuildWithCountsResponse::OAIGuildWithCountsResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGuildWithCountsResponse::OAIGuildWithCountsResponse() {
    this->initializeModel();
}

OAIGuildWithCountsResponse::~OAIGuildWithCountsResponse() {}

void OAIGuildWithCountsResponse::initializeModel() {

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

    m_approximate_member_count_isSet = false;
    m_approximate_member_count_isValid = false;

    m_approximate_presence_count_isSet = false;
    m_approximate_presence_count_isValid = false;
}

void OAIGuildWithCountsResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGuildWithCountsResponse::fromJsonObject(QJsonObject json) {

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

    m_approximate_member_count_isValid = ::dc_rest::fromJsonValue(m_approximate_member_count, json[QString("approximate_member_count")]);
    m_approximate_member_count_isSet = !json[QString("approximate_member_count")].isNull() && m_approximate_member_count_isValid;

    m_approximate_presence_count_isValid = ::dc_rest::fromJsonValue(m_approximate_presence_count, json[QString("approximate_presence_count")]);
    m_approximate_presence_count_isSet = !json[QString("approximate_presence_count")].isNull() && m_approximate_presence_count_isValid;
}

QString OAIGuildWithCountsResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGuildWithCountsResponse::asJsonObject() const {
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
    if (m_approximate_member_count_isSet) {
        obj.insert(QString("approximate_member_count"), ::dc_rest::toJsonValue(m_approximate_member_count));
    }
    if (m_approximate_presence_count_isSet) {
        obj.insert(QString("approximate_presence_count"), ::dc_rest::toJsonValue(m_approximate_presence_count));
    }
    return obj;
}

QString OAIGuildWithCountsResponse::getId() const {
    return m_id;
}
void OAIGuildWithCountsResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIGuildWithCountsResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIGuildWithCountsResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIGuildWithCountsResponse::getName() const {
    return m_name;
}
void OAIGuildWithCountsResponse::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIGuildWithCountsResponse::is_name_Set() const{
    return m_name_isSet;
}

bool OAIGuildWithCountsResponse::is_name_Valid() const{
    return m_name_isValid;
}

QSet<QString> OAIGuildWithCountsResponse::getFeatures() const {
    return m_features;
}
void OAIGuildWithCountsResponse::setFeatures(const QSet<QString> &features) {
    m_features = features;
    m_features_isSet = true;
}

bool OAIGuildWithCountsResponse::is_features_Set() const{
    return m_features_isSet;
}

bool OAIGuildWithCountsResponse::is_features_Valid() const{
    return m_features_isValid;
}

QString OAIGuildWithCountsResponse::getOwnerId() const {
    return m_owner_id;
}
void OAIGuildWithCountsResponse::setOwnerId(const QString &owner_id) {
    m_owner_id = owner_id;
    m_owner_id_isSet = true;
}

bool OAIGuildWithCountsResponse::is_owner_id_Set() const{
    return m_owner_id_isSet;
}

bool OAIGuildWithCountsResponse::is_owner_id_Valid() const{
    return m_owner_id_isValid;
}

QString OAIGuildWithCountsResponse::getRegion() const {
    return m_region;
}
void OAIGuildWithCountsResponse::setRegion(const QString &region) {
    m_region = region;
    m_region_isSet = true;
}

bool OAIGuildWithCountsResponse::is_region_Set() const{
    return m_region_isSet;
}

bool OAIGuildWithCountsResponse::is_region_Valid() const{
    return m_region_isValid;
}

qint32 OAIGuildWithCountsResponse::getAfkTimeout() const {
    return m_afk_timeout;
}
void OAIGuildWithCountsResponse::setAfkTimeout(const qint32 &afk_timeout) {
    m_afk_timeout = afk_timeout;
    m_afk_timeout_isSet = true;
}

bool OAIGuildWithCountsResponse::is_afk_timeout_Set() const{
    return m_afk_timeout_isSet;
}

bool OAIGuildWithCountsResponse::is_afk_timeout_Valid() const{
    return m_afk_timeout_isValid;
}

qint32 OAIGuildWithCountsResponse::getSystemChannelFlags() const {
    return m_system_channel_flags;
}
void OAIGuildWithCountsResponse::setSystemChannelFlags(const qint32 &system_channel_flags) {
    m_system_channel_flags = system_channel_flags;
    m_system_channel_flags_isSet = true;
}

bool OAIGuildWithCountsResponse::is_system_channel_flags_Set() const{
    return m_system_channel_flags_isSet;
}

bool OAIGuildWithCountsResponse::is_system_channel_flags_Valid() const{
    return m_system_channel_flags_isValid;
}

bool OAIGuildWithCountsResponse::isWidgetEnabled() const {
    return m_widget_enabled;
}
void OAIGuildWithCountsResponse::setWidgetEnabled(const bool &widget_enabled) {
    m_widget_enabled = widget_enabled;
    m_widget_enabled_isSet = true;
}

bool OAIGuildWithCountsResponse::is_widget_enabled_Set() const{
    return m_widget_enabled_isSet;
}

bool OAIGuildWithCountsResponse::is_widget_enabled_Valid() const{
    return m_widget_enabled_isValid;
}

qint32 OAIGuildWithCountsResponse::getVerificationLevel() const {
    return m_verification_level;
}
void OAIGuildWithCountsResponse::setVerificationLevel(const qint32 &verification_level) {
    m_verification_level = verification_level;
    m_verification_level_isSet = true;
}

bool OAIGuildWithCountsResponse::is_verification_level_Set() const{
    return m_verification_level_isSet;
}

bool OAIGuildWithCountsResponse::is_verification_level_Valid() const{
    return m_verification_level_isValid;
}

QList<OAIGuildRoleResponse> OAIGuildWithCountsResponse::getRoles() const {
    return m_roles;
}
void OAIGuildWithCountsResponse::setRoles(const QList<OAIGuildRoleResponse> &roles) {
    m_roles = roles;
    m_roles_isSet = true;
}

bool OAIGuildWithCountsResponse::is_roles_Set() const{
    return m_roles_isSet;
}

bool OAIGuildWithCountsResponse::is_roles_Valid() const{
    return m_roles_isValid;
}

qint32 OAIGuildWithCountsResponse::getDefaultMessageNotifications() const {
    return m_default_message_notifications;
}
void OAIGuildWithCountsResponse::setDefaultMessageNotifications(const qint32 &default_message_notifications) {
    m_default_message_notifications = default_message_notifications;
    m_default_message_notifications_isSet = true;
}

bool OAIGuildWithCountsResponse::is_default_message_notifications_Set() const{
    return m_default_message_notifications_isSet;
}

bool OAIGuildWithCountsResponse::is_default_message_notifications_Valid() const{
    return m_default_message_notifications_isValid;
}

qint32 OAIGuildWithCountsResponse::getMfaLevel() const {
    return m_mfa_level;
}
void OAIGuildWithCountsResponse::setMfaLevel(const qint32 &mfa_level) {
    m_mfa_level = mfa_level;
    m_mfa_level_isSet = true;
}

bool OAIGuildWithCountsResponse::is_mfa_level_Set() const{
    return m_mfa_level_isSet;
}

bool OAIGuildWithCountsResponse::is_mfa_level_Valid() const{
    return m_mfa_level_isValid;
}

qint32 OAIGuildWithCountsResponse::getExplicitContentFilter() const {
    return m_explicit_content_filter;
}
void OAIGuildWithCountsResponse::setExplicitContentFilter(const qint32 &explicit_content_filter) {
    m_explicit_content_filter = explicit_content_filter;
    m_explicit_content_filter_isSet = true;
}

bool OAIGuildWithCountsResponse::is_explicit_content_filter_Set() const{
    return m_explicit_content_filter_isSet;
}

bool OAIGuildWithCountsResponse::is_explicit_content_filter_Valid() const{
    return m_explicit_content_filter_isValid;
}

qint32 OAIGuildWithCountsResponse::getPremiumTier() const {
    return m_premium_tier;
}
void OAIGuildWithCountsResponse::setPremiumTier(const qint32 &premium_tier) {
    m_premium_tier = premium_tier;
    m_premium_tier_isSet = true;
}

bool OAIGuildWithCountsResponse::is_premium_tier_Set() const{
    return m_premium_tier_isSet;
}

bool OAIGuildWithCountsResponse::is_premium_tier_Valid() const{
    return m_premium_tier_isValid;
}

qint32 OAIGuildWithCountsResponse::getPremiumSubscriptionCount() const {
    return m_premium_subscription_count;
}
void OAIGuildWithCountsResponse::setPremiumSubscriptionCount(const qint32 &premium_subscription_count) {
    m_premium_subscription_count = premium_subscription_count;
    m_premium_subscription_count_isSet = true;
}

bool OAIGuildWithCountsResponse::is_premium_subscription_count_Set() const{
    return m_premium_subscription_count_isSet;
}

bool OAIGuildWithCountsResponse::is_premium_subscription_count_Valid() const{
    return m_premium_subscription_count_isValid;
}

QString OAIGuildWithCountsResponse::getPreferredLocale() const {
    return m_preferred_locale;
}
void OAIGuildWithCountsResponse::setPreferredLocale(const QString &preferred_locale) {
    m_preferred_locale = preferred_locale;
    m_preferred_locale_isSet = true;
}

bool OAIGuildWithCountsResponse::is_preferred_locale_Set() const{
    return m_preferred_locale_isSet;
}

bool OAIGuildWithCountsResponse::is_preferred_locale_Valid() const{
    return m_preferred_locale_isValid;
}

bool OAIGuildWithCountsResponse::isPremiumProgressBarEnabled() const {
    return m_premium_progress_bar_enabled;
}
void OAIGuildWithCountsResponse::setPremiumProgressBarEnabled(const bool &premium_progress_bar_enabled) {
    m_premium_progress_bar_enabled = premium_progress_bar_enabled;
    m_premium_progress_bar_enabled_isSet = true;
}

bool OAIGuildWithCountsResponse::is_premium_progress_bar_enabled_Set() const{
    return m_premium_progress_bar_enabled_isSet;
}

bool OAIGuildWithCountsResponse::is_premium_progress_bar_enabled_Valid() const{
    return m_premium_progress_bar_enabled_isValid;
}

bool OAIGuildWithCountsResponse::isNsfw() const {
    return m_nsfw;
}
void OAIGuildWithCountsResponse::setNsfw(const bool &nsfw) {
    m_nsfw = nsfw;
    m_nsfw_isSet = true;
}

bool OAIGuildWithCountsResponse::is_nsfw_Set() const{
    return m_nsfw_isSet;
}

bool OAIGuildWithCountsResponse::is_nsfw_Valid() const{
    return m_nsfw_isValid;
}

qint32 OAIGuildWithCountsResponse::getNsfwLevel() const {
    return m_nsfw_level;
}
void OAIGuildWithCountsResponse::setNsfwLevel(const qint32 &nsfw_level) {
    m_nsfw_level = nsfw_level;
    m_nsfw_level_isSet = true;
}

bool OAIGuildWithCountsResponse::is_nsfw_level_Set() const{
    return m_nsfw_level_isSet;
}

bool OAIGuildWithCountsResponse::is_nsfw_level_Valid() const{
    return m_nsfw_level_isValid;
}

QList<OAIEmojiResponse> OAIGuildWithCountsResponse::getEmojis() const {
    return m_emojis;
}
void OAIGuildWithCountsResponse::setEmojis(const QList<OAIEmojiResponse> &emojis) {
    m_emojis = emojis;
    m_emojis_isSet = true;
}

bool OAIGuildWithCountsResponse::is_emojis_Set() const{
    return m_emojis_isSet;
}

bool OAIGuildWithCountsResponse::is_emojis_Valid() const{
    return m_emojis_isValid;
}

QList<OAIGuildStickerResponse> OAIGuildWithCountsResponse::getStickers() const {
    return m_stickers;
}
void OAIGuildWithCountsResponse::setStickers(const QList<OAIGuildStickerResponse> &stickers) {
    m_stickers = stickers;
    m_stickers_isSet = true;
}

bool OAIGuildWithCountsResponse::is_stickers_Set() const{
    return m_stickers_isSet;
}

bool OAIGuildWithCountsResponse::is_stickers_Valid() const{
    return m_stickers_isValid;
}

QString OAIGuildWithCountsResponse::getIcon() const {
    return m_icon;
}
void OAIGuildWithCountsResponse::setIcon(const QString &icon) {
    m_icon = icon;
    m_icon_isSet = true;
}

bool OAIGuildWithCountsResponse::is_icon_Set() const{
    return m_icon_isSet;
}

bool OAIGuildWithCountsResponse::is_icon_Valid() const{
    return m_icon_isValid;
}

QString OAIGuildWithCountsResponse::getDescription() const {
    return m_description;
}
void OAIGuildWithCountsResponse::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIGuildWithCountsResponse::is_description_Set() const{
    return m_description_isSet;
}

bool OAIGuildWithCountsResponse::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIGuildWithCountsResponse::getHomeHeader() const {
    return m_home_header;
}
void OAIGuildWithCountsResponse::setHomeHeader(const QString &home_header) {
    m_home_header = home_header;
    m_home_header_isSet = true;
}

bool OAIGuildWithCountsResponse::is_home_header_Set() const{
    return m_home_header_isSet;
}

bool OAIGuildWithCountsResponse::is_home_header_Valid() const{
    return m_home_header_isValid;
}

QString OAIGuildWithCountsResponse::getSplash() const {
    return m_splash;
}
void OAIGuildWithCountsResponse::setSplash(const QString &splash) {
    m_splash = splash;
    m_splash_isSet = true;
}

bool OAIGuildWithCountsResponse::is_splash_Set() const{
    return m_splash_isSet;
}

bool OAIGuildWithCountsResponse::is_splash_Valid() const{
    return m_splash_isValid;
}

QString OAIGuildWithCountsResponse::getDiscoverySplash() const {
    return m_discovery_splash;
}
void OAIGuildWithCountsResponse::setDiscoverySplash(const QString &discovery_splash) {
    m_discovery_splash = discovery_splash;
    m_discovery_splash_isSet = true;
}

bool OAIGuildWithCountsResponse::is_discovery_splash_Set() const{
    return m_discovery_splash_isSet;
}

bool OAIGuildWithCountsResponse::is_discovery_splash_Valid() const{
    return m_discovery_splash_isValid;
}

QString OAIGuildWithCountsResponse::getBanner() const {
    return m_banner;
}
void OAIGuildWithCountsResponse::setBanner(const QString &banner) {
    m_banner = banner;
    m_banner_isSet = true;
}

bool OAIGuildWithCountsResponse::is_banner_Set() const{
    return m_banner_isSet;
}

bool OAIGuildWithCountsResponse::is_banner_Valid() const{
    return m_banner_isValid;
}

QString OAIGuildWithCountsResponse::getApplicationId() const {
    return m_application_id;
}
void OAIGuildWithCountsResponse::setApplicationId(const QString &application_id) {
    m_application_id = application_id;
    m_application_id_isSet = true;
}

bool OAIGuildWithCountsResponse::is_application_id_Set() const{
    return m_application_id_isSet;
}

bool OAIGuildWithCountsResponse::is_application_id_Valid() const{
    return m_application_id_isValid;
}

QString OAIGuildWithCountsResponse::getAfkChannelId() const {
    return m_afk_channel_id;
}
void OAIGuildWithCountsResponse::setAfkChannelId(const QString &afk_channel_id) {
    m_afk_channel_id = afk_channel_id;
    m_afk_channel_id_isSet = true;
}

bool OAIGuildWithCountsResponse::is_afk_channel_id_Set() const{
    return m_afk_channel_id_isSet;
}

bool OAIGuildWithCountsResponse::is_afk_channel_id_Valid() const{
    return m_afk_channel_id_isValid;
}

QString OAIGuildWithCountsResponse::getSystemChannelId() const {
    return m_system_channel_id;
}
void OAIGuildWithCountsResponse::setSystemChannelId(const QString &system_channel_id) {
    m_system_channel_id = system_channel_id;
    m_system_channel_id_isSet = true;
}

bool OAIGuildWithCountsResponse::is_system_channel_id_Set() const{
    return m_system_channel_id_isSet;
}

bool OAIGuildWithCountsResponse::is_system_channel_id_Valid() const{
    return m_system_channel_id_isValid;
}

QString OAIGuildWithCountsResponse::getWidgetChannelId() const {
    return m_widget_channel_id;
}
void OAIGuildWithCountsResponse::setWidgetChannelId(const QString &widget_channel_id) {
    m_widget_channel_id = widget_channel_id;
    m_widget_channel_id_isSet = true;
}

bool OAIGuildWithCountsResponse::is_widget_channel_id_Set() const{
    return m_widget_channel_id_isSet;
}

bool OAIGuildWithCountsResponse::is_widget_channel_id_Valid() const{
    return m_widget_channel_id_isValid;
}

qint32 OAIGuildWithCountsResponse::getMaxPresences() const {
    return m_max_presences;
}
void OAIGuildWithCountsResponse::setMaxPresences(const qint32 &max_presences) {
    m_max_presences = max_presences;
    m_max_presences_isSet = true;
}

bool OAIGuildWithCountsResponse::is_max_presences_Set() const{
    return m_max_presences_isSet;
}

bool OAIGuildWithCountsResponse::is_max_presences_Valid() const{
    return m_max_presences_isValid;
}

qint32 OAIGuildWithCountsResponse::getMaxMembers() const {
    return m_max_members;
}
void OAIGuildWithCountsResponse::setMaxMembers(const qint32 &max_members) {
    m_max_members = max_members;
    m_max_members_isSet = true;
}

bool OAIGuildWithCountsResponse::is_max_members_Set() const{
    return m_max_members_isSet;
}

bool OAIGuildWithCountsResponse::is_max_members_Valid() const{
    return m_max_members_isValid;
}

qint32 OAIGuildWithCountsResponse::getMaxStageVideoChannelUsers() const {
    return m_max_stage_video_channel_users;
}
void OAIGuildWithCountsResponse::setMaxStageVideoChannelUsers(const qint32 &max_stage_video_channel_users) {
    m_max_stage_video_channel_users = max_stage_video_channel_users;
    m_max_stage_video_channel_users_isSet = true;
}

bool OAIGuildWithCountsResponse::is_max_stage_video_channel_users_Set() const{
    return m_max_stage_video_channel_users_isSet;
}

bool OAIGuildWithCountsResponse::is_max_stage_video_channel_users_Valid() const{
    return m_max_stage_video_channel_users_isValid;
}

qint32 OAIGuildWithCountsResponse::getMaxVideoChannelUsers() const {
    return m_max_video_channel_users;
}
void OAIGuildWithCountsResponse::setMaxVideoChannelUsers(const qint32 &max_video_channel_users) {
    m_max_video_channel_users = max_video_channel_users;
    m_max_video_channel_users_isSet = true;
}

bool OAIGuildWithCountsResponse::is_max_video_channel_users_Set() const{
    return m_max_video_channel_users_isSet;
}

bool OAIGuildWithCountsResponse::is_max_video_channel_users_Valid() const{
    return m_max_video_channel_users_isValid;
}

QString OAIGuildWithCountsResponse::getVanityUrlCode() const {
    return m_vanity_url_code;
}
void OAIGuildWithCountsResponse::setVanityUrlCode(const QString &vanity_url_code) {
    m_vanity_url_code = vanity_url_code;
    m_vanity_url_code_isSet = true;
}

bool OAIGuildWithCountsResponse::is_vanity_url_code_Set() const{
    return m_vanity_url_code_isSet;
}

bool OAIGuildWithCountsResponse::is_vanity_url_code_Valid() const{
    return m_vanity_url_code_isValid;
}

QString OAIGuildWithCountsResponse::getRulesChannelId() const {
    return m_rules_channel_id;
}
void OAIGuildWithCountsResponse::setRulesChannelId(const QString &rules_channel_id) {
    m_rules_channel_id = rules_channel_id;
    m_rules_channel_id_isSet = true;
}

bool OAIGuildWithCountsResponse::is_rules_channel_id_Set() const{
    return m_rules_channel_id_isSet;
}

bool OAIGuildWithCountsResponse::is_rules_channel_id_Valid() const{
    return m_rules_channel_id_isValid;
}

QString OAIGuildWithCountsResponse::getSafetyAlertsChannelId() const {
    return m_safety_alerts_channel_id;
}
void OAIGuildWithCountsResponse::setSafetyAlertsChannelId(const QString &safety_alerts_channel_id) {
    m_safety_alerts_channel_id = safety_alerts_channel_id;
    m_safety_alerts_channel_id_isSet = true;
}

bool OAIGuildWithCountsResponse::is_safety_alerts_channel_id_Set() const{
    return m_safety_alerts_channel_id_isSet;
}

bool OAIGuildWithCountsResponse::is_safety_alerts_channel_id_Valid() const{
    return m_safety_alerts_channel_id_isValid;
}

QString OAIGuildWithCountsResponse::getPublicUpdatesChannelId() const {
    return m_public_updates_channel_id;
}
void OAIGuildWithCountsResponse::setPublicUpdatesChannelId(const QString &public_updates_channel_id) {
    m_public_updates_channel_id = public_updates_channel_id;
    m_public_updates_channel_id_isSet = true;
}

bool OAIGuildWithCountsResponse::is_public_updates_channel_id_Set() const{
    return m_public_updates_channel_id_isSet;
}

bool OAIGuildWithCountsResponse::is_public_updates_channel_id_Valid() const{
    return m_public_updates_channel_id_isValid;
}

qint32 OAIGuildWithCountsResponse::getApproximateMemberCount() const {
    return m_approximate_member_count;
}
void OAIGuildWithCountsResponse::setApproximateMemberCount(const qint32 &approximate_member_count) {
    m_approximate_member_count = approximate_member_count;
    m_approximate_member_count_isSet = true;
}

bool OAIGuildWithCountsResponse::is_approximate_member_count_Set() const{
    return m_approximate_member_count_isSet;
}

bool OAIGuildWithCountsResponse::is_approximate_member_count_Valid() const{
    return m_approximate_member_count_isValid;
}

qint32 OAIGuildWithCountsResponse::getApproximatePresenceCount() const {
    return m_approximate_presence_count;
}
void OAIGuildWithCountsResponse::setApproximatePresenceCount(const qint32 &approximate_presence_count) {
    m_approximate_presence_count = approximate_presence_count;
    m_approximate_presence_count_isSet = true;
}

bool OAIGuildWithCountsResponse::is_approximate_presence_count_Set() const{
    return m_approximate_presence_count_isSet;
}

bool OAIGuildWithCountsResponse::is_approximate_presence_count_Valid() const{
    return m_approximate_presence_count_isValid;
}

bool OAIGuildWithCountsResponse::isSet() const {
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

        if (m_approximate_member_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_approximate_presence_count_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGuildWithCountsResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_name_isValid && m_features_isValid && m_owner_id_isValid && m_region_isValid && m_afk_timeout_isValid && m_system_channel_flags_isValid && m_widget_enabled_isValid && m_verification_level_isValid && m_roles_isValid && m_default_message_notifications_isValid && m_mfa_level_isValid && m_explicit_content_filter_isValid && m_premium_tier_isValid && m_premium_subscription_count_isValid && m_preferred_locale_isValid && m_premium_progress_bar_enabled_isValid && m_nsfw_isValid && m_nsfw_level_isValid && m_emojis_isValid && m_stickers_isValid && true;
}

} // namespace dc_rest
