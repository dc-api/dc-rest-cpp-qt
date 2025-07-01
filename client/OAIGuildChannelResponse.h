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

/*
 * OAIGuildChannelResponse.h
 *
 * 
 */

#ifndef OAIGuildChannelResponse_H
#define OAIGuildChannelResponse_H

#include <QJsonObject>

#include "OAIChannelPermissionOverwriteResponse.h"
#include "OAIDefaultReactionEmojiResponse.h"
#include "OAIForumTagResponse.h"
#include <QDateTime>
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIChannelPermissionOverwriteResponse;
class OAIForumTagResponse;
class OAIDefaultReactionEmojiResponse;

class OAIGuildChannelResponse : public OAIObject {
public:
    OAIGuildChannelResponse();
    OAIGuildChannelResponse(QString json);
    ~OAIGuildChannelResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    qint32 getType() const;
    void setType(const qint32 &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    qint32 getFlags() const;
    void setFlags(const qint32 &flags);
    bool is_flags_Set() const;
    bool is_flags_Valid() const;

    QString getGuildId() const;
    void setGuildId(const QString &guild_id);
    bool is_guild_id_Set() const;
    bool is_guild_id_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    qint32 getPosition() const;
    void setPosition(const qint32 &position);
    bool is_position_Set() const;
    bool is_position_Valid() const;

    QString getLastMessageId() const;
    void setLastMessageId(const QString &last_message_id);
    bool is_last_message_id_Set() const;
    bool is_last_message_id_Valid() const;

    QDateTime getLastPinTimestamp() const;
    void setLastPinTimestamp(const QDateTime &last_pin_timestamp);
    bool is_last_pin_timestamp_Set() const;
    bool is_last_pin_timestamp_Valid() const;

    QString getParentId() const;
    void setParentId(const QString &parent_id);
    bool is_parent_id_Set() const;
    bool is_parent_id_Valid() const;

    qint32 getRateLimitPerUser() const;
    void setRateLimitPerUser(const qint32 &rate_limit_per_user);
    bool is_rate_limit_per_user_Set() const;
    bool is_rate_limit_per_user_Valid() const;

    qint32 getBitrate() const;
    void setBitrate(const qint32 &bitrate);
    bool is_bitrate_Set() const;
    bool is_bitrate_Valid() const;

    qint32 getUserLimit() const;
    void setUserLimit(const qint32 &user_limit);
    bool is_user_limit_Set() const;
    bool is_user_limit_Valid() const;

    QString getRtcRegion() const;
    void setRtcRegion(const QString &rtc_region);
    bool is_rtc_region_Set() const;
    bool is_rtc_region_Valid() const;

    qint32 getVideoQualityMode() const;
    void setVideoQualityMode(const qint32 &video_quality_mode);
    bool is_video_quality_mode_Set() const;
    bool is_video_quality_mode_Valid() const;

    QString getPermissions() const;
    void setPermissions(const QString &permissions);
    bool is_permissions_Set() const;
    bool is_permissions_Valid() const;

    QString getTopic() const;
    void setTopic(const QString &topic);
    bool is_topic_Set() const;
    bool is_topic_Valid() const;

    qint32 getDefaultAutoArchiveDuration() const;
    void setDefaultAutoArchiveDuration(const qint32 &default_auto_archive_duration);
    bool is_default_auto_archive_duration_Set() const;
    bool is_default_auto_archive_duration_Valid() const;

    qint32 getDefaultThreadRateLimitPerUser() const;
    void setDefaultThreadRateLimitPerUser(const qint32 &default_thread_rate_limit_per_user);
    bool is_default_thread_rate_limit_per_user_Set() const;
    bool is_default_thread_rate_limit_per_user_Valid() const;

    QList<OAIChannelPermissionOverwriteResponse> getPermissionOverwrites() const;
    void setPermissionOverwrites(const QList<OAIChannelPermissionOverwriteResponse> &permission_overwrites);
    bool is_permission_overwrites_Set() const;
    bool is_permission_overwrites_Valid() const;

    bool isNsfw() const;
    void setNsfw(const bool &nsfw);
    bool is_nsfw_Set() const;
    bool is_nsfw_Valid() const;

    QList<OAIForumTagResponse> getAvailableTags() const;
    void setAvailableTags(const QList<OAIForumTagResponse> &available_tags);
    bool is_available_tags_Set() const;
    bool is_available_tags_Valid() const;

    OAIDefaultReactionEmojiResponse getDefaultReactionEmoji() const;
    void setDefaultReactionEmoji(const OAIDefaultReactionEmojiResponse &default_reaction_emoji);
    bool is_default_reaction_emoji_Set() const;
    bool is_default_reaction_emoji_Valid() const;

    qint32 getDefaultSortOrder() const;
    void setDefaultSortOrder(const qint32 &default_sort_order);
    bool is_default_sort_order_Set() const;
    bool is_default_sort_order_Valid() const;

    qint32 getDefaultForumLayout() const;
    void setDefaultForumLayout(const qint32 &default_forum_layout);
    bool is_default_forum_layout_Set() const;
    bool is_default_forum_layout_Valid() const;

    QString getDefaultTagSetting() const;
    void setDefaultTagSetting(const QString &default_tag_setting);
    bool is_default_tag_setting_Set() const;
    bool is_default_tag_setting_Valid() const;

    QDateTime getHdStreamingUntil() const;
    void setHdStreamingUntil(const QDateTime &hd_streaming_until);
    bool is_hd_streaming_until_Set() const;
    bool is_hd_streaming_until_Valid() const;

    QString getHdStreamingBuyerId() const;
    void setHdStreamingBuyerId(const QString &hd_streaming_buyer_id);
    bool is_hd_streaming_buyer_id_Set() const;
    bool is_hd_streaming_buyer_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    qint32 m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    qint32 m_flags;
    bool m_flags_isSet;
    bool m_flags_isValid;

    QString m_guild_id;
    bool m_guild_id_isSet;
    bool m_guild_id_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    qint32 m_position;
    bool m_position_isSet;
    bool m_position_isValid;

    QString m_last_message_id;
    bool m_last_message_id_isSet;
    bool m_last_message_id_isValid;

    QDateTime m_last_pin_timestamp;
    bool m_last_pin_timestamp_isSet;
    bool m_last_pin_timestamp_isValid;

    QString m_parent_id;
    bool m_parent_id_isSet;
    bool m_parent_id_isValid;

    qint32 m_rate_limit_per_user;
    bool m_rate_limit_per_user_isSet;
    bool m_rate_limit_per_user_isValid;

    qint32 m_bitrate;
    bool m_bitrate_isSet;
    bool m_bitrate_isValid;

    qint32 m_user_limit;
    bool m_user_limit_isSet;
    bool m_user_limit_isValid;

    QString m_rtc_region;
    bool m_rtc_region_isSet;
    bool m_rtc_region_isValid;

    qint32 m_video_quality_mode;
    bool m_video_quality_mode_isSet;
    bool m_video_quality_mode_isValid;

    QString m_permissions;
    bool m_permissions_isSet;
    bool m_permissions_isValid;

    QString m_topic;
    bool m_topic_isSet;
    bool m_topic_isValid;

    qint32 m_default_auto_archive_duration;
    bool m_default_auto_archive_duration_isSet;
    bool m_default_auto_archive_duration_isValid;

    qint32 m_default_thread_rate_limit_per_user;
    bool m_default_thread_rate_limit_per_user_isSet;
    bool m_default_thread_rate_limit_per_user_isValid;

    QList<OAIChannelPermissionOverwriteResponse> m_permission_overwrites;
    bool m_permission_overwrites_isSet;
    bool m_permission_overwrites_isValid;

    bool m_nsfw;
    bool m_nsfw_isSet;
    bool m_nsfw_isValid;

    QList<OAIForumTagResponse> m_available_tags;
    bool m_available_tags_isSet;
    bool m_available_tags_isValid;

    OAIDefaultReactionEmojiResponse m_default_reaction_emoji;
    bool m_default_reaction_emoji_isSet;
    bool m_default_reaction_emoji_isValid;

    qint32 m_default_sort_order;
    bool m_default_sort_order_isSet;
    bool m_default_sort_order_isValid;

    qint32 m_default_forum_layout;
    bool m_default_forum_layout_isSet;
    bool m_default_forum_layout_isValid;

    QString m_default_tag_setting;
    bool m_default_tag_setting_isSet;
    bool m_default_tag_setting_isValid;

    QDateTime m_hd_streaming_until;
    bool m_hd_streaming_until_isSet;
    bool m_hd_streaming_until_isValid;

    QString m_hd_streaming_buyer_id;
    bool m_hd_streaming_buyer_id_isSet;
    bool m_hd_streaming_buyer_id_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIGuildChannelResponse)

#endif // OAIGuildChannelResponse_H
