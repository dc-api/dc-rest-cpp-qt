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

#include "OAIUpdate_channel_request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIUpdate_channel_request::OAIUpdate_channel_request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUpdate_channel_request::OAIUpdate_channel_request() {
    this->initializeModel();
}

OAIUpdate_channel_request::~OAIUpdate_channel_request() {}

void OAIUpdate_channel_request::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;

    m_icon_isSet = false;
    m_icon_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_position_isSet = false;
    m_position_isValid = false;

    m_topic_isSet = false;
    m_topic_isValid = false;

    m_bitrate_isSet = false;
    m_bitrate_isValid = false;

    m_user_limit_isSet = false;
    m_user_limit_isValid = false;

    m_nsfw_isSet = false;
    m_nsfw_isValid = false;

    m_rate_limit_per_user_isSet = false;
    m_rate_limit_per_user_isValid = false;

    m_parent_id_isSet = false;
    m_parent_id_isValid = false;

    m_permission_overwrites_isSet = false;
    m_permission_overwrites_isValid = false;

    m_rtc_region_isSet = false;
    m_rtc_region_isValid = false;

    m_video_quality_mode_isSet = false;
    m_video_quality_mode_isValid = false;

    m_default_auto_archive_duration_isSet = false;
    m_default_auto_archive_duration_isValid = false;

    m_default_reaction_emoji_isSet = false;
    m_default_reaction_emoji_isValid = false;

    m_default_thread_rate_limit_per_user_isSet = false;
    m_default_thread_rate_limit_per_user_isValid = false;

    m_default_sort_order_isSet = false;
    m_default_sort_order_isValid = false;

    m_default_forum_layout_isSet = false;
    m_default_forum_layout_isValid = false;

    m_default_tag_setting_isSet = false;
    m_default_tag_setting_isValid = false;

    m_flags_isSet = false;
    m_flags_isValid = false;

    m_available_tags_isSet = false;
    m_available_tags_isValid = false;

    m_archived_isSet = false;
    m_archived_isValid = false;

    m_locked_isSet = false;
    m_locked_isValid = false;

    m_invitable_isSet = false;
    m_invitable_isValid = false;

    m_auto_archive_duration_isSet = false;
    m_auto_archive_duration_isValid = false;

    m_applied_tags_isSet = false;
    m_applied_tags_isValid = false;
}

void OAIUpdate_channel_request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUpdate_channel_request::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_icon_isValid = ::dc_rest::fromJsonValue(m_icon, json[QString("icon")]);
    m_icon_isSet = !json[QString("icon")].isNull() && m_icon_isValid;

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_position_isValid = ::dc_rest::fromJsonValue(m_position, json[QString("position")]);
    m_position_isSet = !json[QString("position")].isNull() && m_position_isValid;

    m_topic_isValid = ::dc_rest::fromJsonValue(m_topic, json[QString("topic")]);
    m_topic_isSet = !json[QString("topic")].isNull() && m_topic_isValid;

    m_bitrate_isValid = ::dc_rest::fromJsonValue(m_bitrate, json[QString("bitrate")]);
    m_bitrate_isSet = !json[QString("bitrate")].isNull() && m_bitrate_isValid;

    m_user_limit_isValid = ::dc_rest::fromJsonValue(m_user_limit, json[QString("user_limit")]);
    m_user_limit_isSet = !json[QString("user_limit")].isNull() && m_user_limit_isValid;

    m_nsfw_isValid = ::dc_rest::fromJsonValue(m_nsfw, json[QString("nsfw")]);
    m_nsfw_isSet = !json[QString("nsfw")].isNull() && m_nsfw_isValid;

    m_rate_limit_per_user_isValid = ::dc_rest::fromJsonValue(m_rate_limit_per_user, json[QString("rate_limit_per_user")]);
    m_rate_limit_per_user_isSet = !json[QString("rate_limit_per_user")].isNull() && m_rate_limit_per_user_isValid;

    m_parent_id_isValid = ::dc_rest::fromJsonValue(m_parent_id, json[QString("parent_id")]);
    m_parent_id_isSet = !json[QString("parent_id")].isNull() && m_parent_id_isValid;

    m_permission_overwrites_isValid = ::dc_rest::fromJsonValue(m_permission_overwrites, json[QString("permission_overwrites")]);
    m_permission_overwrites_isSet = !json[QString("permission_overwrites")].isNull() && m_permission_overwrites_isValid;

    m_rtc_region_isValid = ::dc_rest::fromJsonValue(m_rtc_region, json[QString("rtc_region")]);
    m_rtc_region_isSet = !json[QString("rtc_region")].isNull() && m_rtc_region_isValid;

    m_video_quality_mode_isValid = ::dc_rest::fromJsonValue(m_video_quality_mode, json[QString("video_quality_mode")]);
    m_video_quality_mode_isSet = !json[QString("video_quality_mode")].isNull() && m_video_quality_mode_isValid;

    m_default_auto_archive_duration_isValid = ::dc_rest::fromJsonValue(m_default_auto_archive_duration, json[QString("default_auto_archive_duration")]);
    m_default_auto_archive_duration_isSet = !json[QString("default_auto_archive_duration")].isNull() && m_default_auto_archive_duration_isValid;

    m_default_reaction_emoji_isValid = ::dc_rest::fromJsonValue(m_default_reaction_emoji, json[QString("default_reaction_emoji")]);
    m_default_reaction_emoji_isSet = !json[QString("default_reaction_emoji")].isNull() && m_default_reaction_emoji_isValid;

    m_default_thread_rate_limit_per_user_isValid = ::dc_rest::fromJsonValue(m_default_thread_rate_limit_per_user, json[QString("default_thread_rate_limit_per_user")]);
    m_default_thread_rate_limit_per_user_isSet = !json[QString("default_thread_rate_limit_per_user")].isNull() && m_default_thread_rate_limit_per_user_isValid;

    m_default_sort_order_isValid = ::dc_rest::fromJsonValue(m_default_sort_order, json[QString("default_sort_order")]);
    m_default_sort_order_isSet = !json[QString("default_sort_order")].isNull() && m_default_sort_order_isValid;

    m_default_forum_layout_isValid = ::dc_rest::fromJsonValue(m_default_forum_layout, json[QString("default_forum_layout")]);
    m_default_forum_layout_isSet = !json[QString("default_forum_layout")].isNull() && m_default_forum_layout_isValid;

    m_default_tag_setting_isValid = ::dc_rest::fromJsonValue(m_default_tag_setting, json[QString("default_tag_setting")]);
    m_default_tag_setting_isSet = !json[QString("default_tag_setting")].isNull() && m_default_tag_setting_isValid;

    m_flags_isValid = ::dc_rest::fromJsonValue(m_flags, json[QString("flags")]);
    m_flags_isSet = !json[QString("flags")].isNull() && m_flags_isValid;

    m_available_tags_isValid = ::dc_rest::fromJsonValue(m_available_tags, json[QString("available_tags")]);
    m_available_tags_isSet = !json[QString("available_tags")].isNull() && m_available_tags_isValid;

    m_archived_isValid = ::dc_rest::fromJsonValue(m_archived, json[QString("archived")]);
    m_archived_isSet = !json[QString("archived")].isNull() && m_archived_isValid;

    m_locked_isValid = ::dc_rest::fromJsonValue(m_locked, json[QString("locked")]);
    m_locked_isSet = !json[QString("locked")].isNull() && m_locked_isValid;

    m_invitable_isValid = ::dc_rest::fromJsonValue(m_invitable, json[QString("invitable")]);
    m_invitable_isSet = !json[QString("invitable")].isNull() && m_invitable_isValid;

    m_auto_archive_duration_isValid = ::dc_rest::fromJsonValue(m_auto_archive_duration, json[QString("auto_archive_duration")]);
    m_auto_archive_duration_isSet = !json[QString("auto_archive_duration")].isNull() && m_auto_archive_duration_isValid;

    m_applied_tags_isValid = ::dc_rest::fromJsonValue(m_applied_tags, json[QString("applied_tags")]);
    m_applied_tags_isSet = !json[QString("applied_tags")].isNull() && m_applied_tags_isValid;
}

QString OAIUpdate_channel_request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUpdate_channel_request::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_icon_isSet) {
        obj.insert(QString("icon"), ::dc_rest::toJsonValue(m_icon));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_position_isSet) {
        obj.insert(QString("position"), ::dc_rest::toJsonValue(m_position));
    }
    if (m_topic_isSet) {
        obj.insert(QString("topic"), ::dc_rest::toJsonValue(m_topic));
    }
    if (m_bitrate_isSet) {
        obj.insert(QString("bitrate"), ::dc_rest::toJsonValue(m_bitrate));
    }
    if (m_user_limit_isSet) {
        obj.insert(QString("user_limit"), ::dc_rest::toJsonValue(m_user_limit));
    }
    if (m_nsfw_isSet) {
        obj.insert(QString("nsfw"), ::dc_rest::toJsonValue(m_nsfw));
    }
    if (m_rate_limit_per_user_isSet) {
        obj.insert(QString("rate_limit_per_user"), ::dc_rest::toJsonValue(m_rate_limit_per_user));
    }
    if (m_parent_id_isSet) {
        obj.insert(QString("parent_id"), ::dc_rest::toJsonValue(m_parent_id));
    }
    if (m_permission_overwrites.size() > 0) {
        obj.insert(QString("permission_overwrites"), ::dc_rest::toJsonValue(m_permission_overwrites));
    }
    if (m_rtc_region_isSet) {
        obj.insert(QString("rtc_region"), ::dc_rest::toJsonValue(m_rtc_region));
    }
    if (m_video_quality_mode_isSet) {
        obj.insert(QString("video_quality_mode"), ::dc_rest::toJsonValue(m_video_quality_mode));
    }
    if (m_default_auto_archive_duration_isSet) {
        obj.insert(QString("default_auto_archive_duration"), ::dc_rest::toJsonValue(m_default_auto_archive_duration));
    }
    if (m_default_reaction_emoji.isSet()) {
        obj.insert(QString("default_reaction_emoji"), ::dc_rest::toJsonValue(m_default_reaction_emoji));
    }
    if (m_default_thread_rate_limit_per_user_isSet) {
        obj.insert(QString("default_thread_rate_limit_per_user"), ::dc_rest::toJsonValue(m_default_thread_rate_limit_per_user));
    }
    if (m_default_sort_order_isSet) {
        obj.insert(QString("default_sort_order"), ::dc_rest::toJsonValue(m_default_sort_order));
    }
    if (m_default_forum_layout_isSet) {
        obj.insert(QString("default_forum_layout"), ::dc_rest::toJsonValue(m_default_forum_layout));
    }
    if (m_default_tag_setting_isSet) {
        obj.insert(QString("default_tag_setting"), ::dc_rest::toJsonValue(m_default_tag_setting));
    }
    if (m_flags_isSet) {
        obj.insert(QString("flags"), ::dc_rest::toJsonValue(m_flags));
    }
    if (m_available_tags.size() > 0) {
        obj.insert(QString("available_tags"), ::dc_rest::toJsonValue(m_available_tags));
    }
    if (m_archived_isSet) {
        obj.insert(QString("archived"), ::dc_rest::toJsonValue(m_archived));
    }
    if (m_locked_isSet) {
        obj.insert(QString("locked"), ::dc_rest::toJsonValue(m_locked));
    }
    if (m_invitable_isSet) {
        obj.insert(QString("invitable"), ::dc_rest::toJsonValue(m_invitable));
    }
    if (m_auto_archive_duration_isSet) {
        obj.insert(QString("auto_archive_duration"), ::dc_rest::toJsonValue(m_auto_archive_duration));
    }
    if (m_applied_tags.size() > 0) {
        obj.insert(QString("applied_tags"), ::dc_rest::toJsonValue(m_applied_tags));
    }
    return obj;
}

QString OAIUpdate_channel_request::getName() const {
    return m_name;
}
void OAIUpdate_channel_request::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIUpdate_channel_request::is_name_Set() const{
    return m_name_isSet;
}

bool OAIUpdate_channel_request::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIUpdate_channel_request::getIcon() const {
    return m_icon;
}
void OAIUpdate_channel_request::setIcon(const QString &icon) {
    m_icon = icon;
    m_icon_isSet = true;
}

bool OAIUpdate_channel_request::is_icon_Set() const{
    return m_icon_isSet;
}

bool OAIUpdate_channel_request::is_icon_Valid() const{
    return m_icon_isValid;
}

qint32 OAIUpdate_channel_request::getType() const {
    return m_type;
}
void OAIUpdate_channel_request::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIUpdate_channel_request::is_type_Set() const{
    return m_type_isSet;
}

bool OAIUpdate_channel_request::is_type_Valid() const{
    return m_type_isValid;
}

qint32 OAIUpdate_channel_request::getPosition() const {
    return m_position;
}
void OAIUpdate_channel_request::setPosition(const qint32 &position) {
    m_position = position;
    m_position_isSet = true;
}

bool OAIUpdate_channel_request::is_position_Set() const{
    return m_position_isSet;
}

bool OAIUpdate_channel_request::is_position_Valid() const{
    return m_position_isValid;
}

QString OAIUpdate_channel_request::getTopic() const {
    return m_topic;
}
void OAIUpdate_channel_request::setTopic(const QString &topic) {
    m_topic = topic;
    m_topic_isSet = true;
}

bool OAIUpdate_channel_request::is_topic_Set() const{
    return m_topic_isSet;
}

bool OAIUpdate_channel_request::is_topic_Valid() const{
    return m_topic_isValid;
}

qint32 OAIUpdate_channel_request::getBitrate() const {
    return m_bitrate;
}
void OAIUpdate_channel_request::setBitrate(const qint32 &bitrate) {
    m_bitrate = bitrate;
    m_bitrate_isSet = true;
}

bool OAIUpdate_channel_request::is_bitrate_Set() const{
    return m_bitrate_isSet;
}

bool OAIUpdate_channel_request::is_bitrate_Valid() const{
    return m_bitrate_isValid;
}

qint32 OAIUpdate_channel_request::getUserLimit() const {
    return m_user_limit;
}
void OAIUpdate_channel_request::setUserLimit(const qint32 &user_limit) {
    m_user_limit = user_limit;
    m_user_limit_isSet = true;
}

bool OAIUpdate_channel_request::is_user_limit_Set() const{
    return m_user_limit_isSet;
}

bool OAIUpdate_channel_request::is_user_limit_Valid() const{
    return m_user_limit_isValid;
}

bool OAIUpdate_channel_request::isNsfw() const {
    return m_nsfw;
}
void OAIUpdate_channel_request::setNsfw(const bool &nsfw) {
    m_nsfw = nsfw;
    m_nsfw_isSet = true;
}

bool OAIUpdate_channel_request::is_nsfw_Set() const{
    return m_nsfw_isSet;
}

bool OAIUpdate_channel_request::is_nsfw_Valid() const{
    return m_nsfw_isValid;
}

qint32 OAIUpdate_channel_request::getRateLimitPerUser() const {
    return m_rate_limit_per_user;
}
void OAIUpdate_channel_request::setRateLimitPerUser(const qint32 &rate_limit_per_user) {
    m_rate_limit_per_user = rate_limit_per_user;
    m_rate_limit_per_user_isSet = true;
}

bool OAIUpdate_channel_request::is_rate_limit_per_user_Set() const{
    return m_rate_limit_per_user_isSet;
}

bool OAIUpdate_channel_request::is_rate_limit_per_user_Valid() const{
    return m_rate_limit_per_user_isValid;
}

QString OAIUpdate_channel_request::getParentId() const {
    return m_parent_id;
}
void OAIUpdate_channel_request::setParentId(const QString &parent_id) {
    m_parent_id = parent_id;
    m_parent_id_isSet = true;
}

bool OAIUpdate_channel_request::is_parent_id_Set() const{
    return m_parent_id_isSet;
}

bool OAIUpdate_channel_request::is_parent_id_Valid() const{
    return m_parent_id_isValid;
}

QList<OAIChannelPermissionOverwriteRequest> OAIUpdate_channel_request::getPermissionOverwrites() const {
    return m_permission_overwrites;
}
void OAIUpdate_channel_request::setPermissionOverwrites(const QList<OAIChannelPermissionOverwriteRequest> &permission_overwrites) {
    m_permission_overwrites = permission_overwrites;
    m_permission_overwrites_isSet = true;
}

bool OAIUpdate_channel_request::is_permission_overwrites_Set() const{
    return m_permission_overwrites_isSet;
}

bool OAIUpdate_channel_request::is_permission_overwrites_Valid() const{
    return m_permission_overwrites_isValid;
}

QString OAIUpdate_channel_request::getRtcRegion() const {
    return m_rtc_region;
}
void OAIUpdate_channel_request::setRtcRegion(const QString &rtc_region) {
    m_rtc_region = rtc_region;
    m_rtc_region_isSet = true;
}

bool OAIUpdate_channel_request::is_rtc_region_Set() const{
    return m_rtc_region_isSet;
}

bool OAIUpdate_channel_request::is_rtc_region_Valid() const{
    return m_rtc_region_isValid;
}

qint32 OAIUpdate_channel_request::getVideoQualityMode() const {
    return m_video_quality_mode;
}
void OAIUpdate_channel_request::setVideoQualityMode(const qint32 &video_quality_mode) {
    m_video_quality_mode = video_quality_mode;
    m_video_quality_mode_isSet = true;
}

bool OAIUpdate_channel_request::is_video_quality_mode_Set() const{
    return m_video_quality_mode_isSet;
}

bool OAIUpdate_channel_request::is_video_quality_mode_Valid() const{
    return m_video_quality_mode_isValid;
}

qint32 OAIUpdate_channel_request::getDefaultAutoArchiveDuration() const {
    return m_default_auto_archive_duration;
}
void OAIUpdate_channel_request::setDefaultAutoArchiveDuration(const qint32 &default_auto_archive_duration) {
    m_default_auto_archive_duration = default_auto_archive_duration;
    m_default_auto_archive_duration_isSet = true;
}

bool OAIUpdate_channel_request::is_default_auto_archive_duration_Set() const{
    return m_default_auto_archive_duration_isSet;
}

bool OAIUpdate_channel_request::is_default_auto_archive_duration_Valid() const{
    return m_default_auto_archive_duration_isValid;
}

OAIUpdateDefaultReactionEmojiRequest OAIUpdate_channel_request::getDefaultReactionEmoji() const {
    return m_default_reaction_emoji;
}
void OAIUpdate_channel_request::setDefaultReactionEmoji(const OAIUpdateDefaultReactionEmojiRequest &default_reaction_emoji) {
    m_default_reaction_emoji = default_reaction_emoji;
    m_default_reaction_emoji_isSet = true;
}

bool OAIUpdate_channel_request::is_default_reaction_emoji_Set() const{
    return m_default_reaction_emoji_isSet;
}

bool OAIUpdate_channel_request::is_default_reaction_emoji_Valid() const{
    return m_default_reaction_emoji_isValid;
}

qint32 OAIUpdate_channel_request::getDefaultThreadRateLimitPerUser() const {
    return m_default_thread_rate_limit_per_user;
}
void OAIUpdate_channel_request::setDefaultThreadRateLimitPerUser(const qint32 &default_thread_rate_limit_per_user) {
    m_default_thread_rate_limit_per_user = default_thread_rate_limit_per_user;
    m_default_thread_rate_limit_per_user_isSet = true;
}

bool OAIUpdate_channel_request::is_default_thread_rate_limit_per_user_Set() const{
    return m_default_thread_rate_limit_per_user_isSet;
}

bool OAIUpdate_channel_request::is_default_thread_rate_limit_per_user_Valid() const{
    return m_default_thread_rate_limit_per_user_isValid;
}

qint32 OAIUpdate_channel_request::getDefaultSortOrder() const {
    return m_default_sort_order;
}
void OAIUpdate_channel_request::setDefaultSortOrder(const qint32 &default_sort_order) {
    m_default_sort_order = default_sort_order;
    m_default_sort_order_isSet = true;
}

bool OAIUpdate_channel_request::is_default_sort_order_Set() const{
    return m_default_sort_order_isSet;
}

bool OAIUpdate_channel_request::is_default_sort_order_Valid() const{
    return m_default_sort_order_isValid;
}

qint32 OAIUpdate_channel_request::getDefaultForumLayout() const {
    return m_default_forum_layout;
}
void OAIUpdate_channel_request::setDefaultForumLayout(const qint32 &default_forum_layout) {
    m_default_forum_layout = default_forum_layout;
    m_default_forum_layout_isSet = true;
}

bool OAIUpdate_channel_request::is_default_forum_layout_Set() const{
    return m_default_forum_layout_isSet;
}

bool OAIUpdate_channel_request::is_default_forum_layout_Valid() const{
    return m_default_forum_layout_isValid;
}

QString OAIUpdate_channel_request::getDefaultTagSetting() const {
    return m_default_tag_setting;
}
void OAIUpdate_channel_request::setDefaultTagSetting(const QString &default_tag_setting) {
    m_default_tag_setting = default_tag_setting;
    m_default_tag_setting_isSet = true;
}

bool OAIUpdate_channel_request::is_default_tag_setting_Set() const{
    return m_default_tag_setting_isSet;
}

bool OAIUpdate_channel_request::is_default_tag_setting_Valid() const{
    return m_default_tag_setting_isValid;
}

qint32 OAIUpdate_channel_request::getFlags() const {
    return m_flags;
}
void OAIUpdate_channel_request::setFlags(const qint32 &flags) {
    m_flags = flags;
    m_flags_isSet = true;
}

bool OAIUpdate_channel_request::is_flags_Set() const{
    return m_flags_isSet;
}

bool OAIUpdate_channel_request::is_flags_Valid() const{
    return m_flags_isValid;
}

QList<OAIUpdateThreadTagRequest> OAIUpdate_channel_request::getAvailableTags() const {
    return m_available_tags;
}
void OAIUpdate_channel_request::setAvailableTags(const QList<OAIUpdateThreadTagRequest> &available_tags) {
    m_available_tags = available_tags;
    m_available_tags_isSet = true;
}

bool OAIUpdate_channel_request::is_available_tags_Set() const{
    return m_available_tags_isSet;
}

bool OAIUpdate_channel_request::is_available_tags_Valid() const{
    return m_available_tags_isValid;
}

bool OAIUpdate_channel_request::isArchived() const {
    return m_archived;
}
void OAIUpdate_channel_request::setArchived(const bool &archived) {
    m_archived = archived;
    m_archived_isSet = true;
}

bool OAIUpdate_channel_request::is_archived_Set() const{
    return m_archived_isSet;
}

bool OAIUpdate_channel_request::is_archived_Valid() const{
    return m_archived_isValid;
}

bool OAIUpdate_channel_request::isLocked() const {
    return m_locked;
}
void OAIUpdate_channel_request::setLocked(const bool &locked) {
    m_locked = locked;
    m_locked_isSet = true;
}

bool OAIUpdate_channel_request::is_locked_Set() const{
    return m_locked_isSet;
}

bool OAIUpdate_channel_request::is_locked_Valid() const{
    return m_locked_isValid;
}

bool OAIUpdate_channel_request::isInvitable() const {
    return m_invitable;
}
void OAIUpdate_channel_request::setInvitable(const bool &invitable) {
    m_invitable = invitable;
    m_invitable_isSet = true;
}

bool OAIUpdate_channel_request::is_invitable_Set() const{
    return m_invitable_isSet;
}

bool OAIUpdate_channel_request::is_invitable_Valid() const{
    return m_invitable_isValid;
}

qint32 OAIUpdate_channel_request::getAutoArchiveDuration() const {
    return m_auto_archive_duration;
}
void OAIUpdate_channel_request::setAutoArchiveDuration(const qint32 &auto_archive_duration) {
    m_auto_archive_duration = auto_archive_duration;
    m_auto_archive_duration_isSet = true;
}

bool OAIUpdate_channel_request::is_auto_archive_duration_Set() const{
    return m_auto_archive_duration_isSet;
}

bool OAIUpdate_channel_request::is_auto_archive_duration_Valid() const{
    return m_auto_archive_duration_isValid;
}

QList<QString> OAIUpdate_channel_request::getAppliedTags() const {
    return m_applied_tags;
}
void OAIUpdate_channel_request::setAppliedTags(const QList<QString> &applied_tags) {
    m_applied_tags = applied_tags;
    m_applied_tags_isSet = true;
}

bool OAIUpdate_channel_request::is_applied_tags_Set() const{
    return m_applied_tags_isSet;
}

bool OAIUpdate_channel_request::is_applied_tags_Valid() const{
    return m_applied_tags_isValid;
}

bool OAIUpdate_channel_request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_icon_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_position_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_topic_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_bitrate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_limit_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_nsfw_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_rate_limit_per_user_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_parent_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_permission_overwrites.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_rtc_region_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_video_quality_mode_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_default_auto_archive_duration_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_default_reaction_emoji.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_default_thread_rate_limit_per_user_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_default_sort_order_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_default_forum_layout_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_default_tag_setting_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_flags_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_available_tags.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_archived_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_locked_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_invitable_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_auto_archive_duration_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_applied_tags.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUpdate_channel_request::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace dc_rest
