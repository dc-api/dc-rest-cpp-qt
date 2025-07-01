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
 * OAIGuildWithCountsResponse.h
 *
 * 
 */

#ifndef OAIGuildWithCountsResponse_H
#define OAIGuildWithCountsResponse_H

#include <QJsonObject>

#include "OAIEmojiResponse.h"
#include "OAIGuildRoleResponse.h"
#include "OAIGuildStickerResponse.h"
#include <QList>
#include <QSet>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIGuildRoleResponse;
class OAIEmojiResponse;
class OAIGuildStickerResponse;

class OAIGuildWithCountsResponse : public OAIObject {
public:
    OAIGuildWithCountsResponse();
    OAIGuildWithCountsResponse(QString json);
    ~OAIGuildWithCountsResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QSet<QString> getFeatures() const;
    void setFeatures(const QSet<QString> &features);
    bool is_features_Set() const;
    bool is_features_Valid() const;

    QString getOwnerId() const;
    void setOwnerId(const QString &owner_id);
    bool is_owner_id_Set() const;
    bool is_owner_id_Valid() const;

    QString getRegion() const;
    void setRegion(const QString &region);
    bool is_region_Set() const;
    bool is_region_Valid() const;

    qint32 getAfkTimeout() const;
    void setAfkTimeout(const qint32 &afk_timeout);
    bool is_afk_timeout_Set() const;
    bool is_afk_timeout_Valid() const;

    qint32 getSystemChannelFlags() const;
    void setSystemChannelFlags(const qint32 &system_channel_flags);
    bool is_system_channel_flags_Set() const;
    bool is_system_channel_flags_Valid() const;

    bool isWidgetEnabled() const;
    void setWidgetEnabled(const bool &widget_enabled);
    bool is_widget_enabled_Set() const;
    bool is_widget_enabled_Valid() const;

    qint32 getVerificationLevel() const;
    void setVerificationLevel(const qint32 &verification_level);
    bool is_verification_level_Set() const;
    bool is_verification_level_Valid() const;

    QList<OAIGuildRoleResponse> getRoles() const;
    void setRoles(const QList<OAIGuildRoleResponse> &roles);
    bool is_roles_Set() const;
    bool is_roles_Valid() const;

    qint32 getDefaultMessageNotifications() const;
    void setDefaultMessageNotifications(const qint32 &default_message_notifications);
    bool is_default_message_notifications_Set() const;
    bool is_default_message_notifications_Valid() const;

    qint32 getMfaLevel() const;
    void setMfaLevel(const qint32 &mfa_level);
    bool is_mfa_level_Set() const;
    bool is_mfa_level_Valid() const;

    qint32 getExplicitContentFilter() const;
    void setExplicitContentFilter(const qint32 &explicit_content_filter);
    bool is_explicit_content_filter_Set() const;
    bool is_explicit_content_filter_Valid() const;

    qint32 getPremiumTier() const;
    void setPremiumTier(const qint32 &premium_tier);
    bool is_premium_tier_Set() const;
    bool is_premium_tier_Valid() const;

    qint32 getPremiumSubscriptionCount() const;
    void setPremiumSubscriptionCount(const qint32 &premium_subscription_count);
    bool is_premium_subscription_count_Set() const;
    bool is_premium_subscription_count_Valid() const;

    QString getPreferredLocale() const;
    void setPreferredLocale(const QString &preferred_locale);
    bool is_preferred_locale_Set() const;
    bool is_preferred_locale_Valid() const;

    bool isPremiumProgressBarEnabled() const;
    void setPremiumProgressBarEnabled(const bool &premium_progress_bar_enabled);
    bool is_premium_progress_bar_enabled_Set() const;
    bool is_premium_progress_bar_enabled_Valid() const;

    bool isNsfw() const;
    void setNsfw(const bool &nsfw);
    bool is_nsfw_Set() const;
    bool is_nsfw_Valid() const;

    qint32 getNsfwLevel() const;
    void setNsfwLevel(const qint32 &nsfw_level);
    bool is_nsfw_level_Set() const;
    bool is_nsfw_level_Valid() const;

    QList<OAIEmojiResponse> getEmojis() const;
    void setEmojis(const QList<OAIEmojiResponse> &emojis);
    bool is_emojis_Set() const;
    bool is_emojis_Valid() const;

    QList<OAIGuildStickerResponse> getStickers() const;
    void setStickers(const QList<OAIGuildStickerResponse> &stickers);
    bool is_stickers_Set() const;
    bool is_stickers_Valid() const;

    QString getIcon() const;
    void setIcon(const QString &icon);
    bool is_icon_Set() const;
    bool is_icon_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getHomeHeader() const;
    void setHomeHeader(const QString &home_header);
    bool is_home_header_Set() const;
    bool is_home_header_Valid() const;

    QString getSplash() const;
    void setSplash(const QString &splash);
    bool is_splash_Set() const;
    bool is_splash_Valid() const;

    QString getDiscoverySplash() const;
    void setDiscoverySplash(const QString &discovery_splash);
    bool is_discovery_splash_Set() const;
    bool is_discovery_splash_Valid() const;

    QString getBanner() const;
    void setBanner(const QString &banner);
    bool is_banner_Set() const;
    bool is_banner_Valid() const;

    QString getApplicationId() const;
    void setApplicationId(const QString &application_id);
    bool is_application_id_Set() const;
    bool is_application_id_Valid() const;

    QString getAfkChannelId() const;
    void setAfkChannelId(const QString &afk_channel_id);
    bool is_afk_channel_id_Set() const;
    bool is_afk_channel_id_Valid() const;

    QString getSystemChannelId() const;
    void setSystemChannelId(const QString &system_channel_id);
    bool is_system_channel_id_Set() const;
    bool is_system_channel_id_Valid() const;

    QString getWidgetChannelId() const;
    void setWidgetChannelId(const QString &widget_channel_id);
    bool is_widget_channel_id_Set() const;
    bool is_widget_channel_id_Valid() const;

    qint32 getMaxPresences() const;
    void setMaxPresences(const qint32 &max_presences);
    bool is_max_presences_Set() const;
    bool is_max_presences_Valid() const;

    qint32 getMaxMembers() const;
    void setMaxMembers(const qint32 &max_members);
    bool is_max_members_Set() const;
    bool is_max_members_Valid() const;

    qint32 getMaxStageVideoChannelUsers() const;
    void setMaxStageVideoChannelUsers(const qint32 &max_stage_video_channel_users);
    bool is_max_stage_video_channel_users_Set() const;
    bool is_max_stage_video_channel_users_Valid() const;

    qint32 getMaxVideoChannelUsers() const;
    void setMaxVideoChannelUsers(const qint32 &max_video_channel_users);
    bool is_max_video_channel_users_Set() const;
    bool is_max_video_channel_users_Valid() const;

    QString getVanityUrlCode() const;
    void setVanityUrlCode(const QString &vanity_url_code);
    bool is_vanity_url_code_Set() const;
    bool is_vanity_url_code_Valid() const;

    QString getRulesChannelId() const;
    void setRulesChannelId(const QString &rules_channel_id);
    bool is_rules_channel_id_Set() const;
    bool is_rules_channel_id_Valid() const;

    QString getSafetyAlertsChannelId() const;
    void setSafetyAlertsChannelId(const QString &safety_alerts_channel_id);
    bool is_safety_alerts_channel_id_Set() const;
    bool is_safety_alerts_channel_id_Valid() const;

    QString getPublicUpdatesChannelId() const;
    void setPublicUpdatesChannelId(const QString &public_updates_channel_id);
    bool is_public_updates_channel_id_Set() const;
    bool is_public_updates_channel_id_Valid() const;

    qint32 getApproximateMemberCount() const;
    void setApproximateMemberCount(const qint32 &approximate_member_count);
    bool is_approximate_member_count_Set() const;
    bool is_approximate_member_count_Valid() const;

    qint32 getApproximatePresenceCount() const;
    void setApproximatePresenceCount(const qint32 &approximate_presence_count);
    bool is_approximate_presence_count_Set() const;
    bool is_approximate_presence_count_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    QSet<QString> m_features;
    bool m_features_isSet;
    bool m_features_isValid;

    QString m_owner_id;
    bool m_owner_id_isSet;
    bool m_owner_id_isValid;

    QString m_region;
    bool m_region_isSet;
    bool m_region_isValid;

    qint32 m_afk_timeout;
    bool m_afk_timeout_isSet;
    bool m_afk_timeout_isValid;

    qint32 m_system_channel_flags;
    bool m_system_channel_flags_isSet;
    bool m_system_channel_flags_isValid;

    bool m_widget_enabled;
    bool m_widget_enabled_isSet;
    bool m_widget_enabled_isValid;

    qint32 m_verification_level;
    bool m_verification_level_isSet;
    bool m_verification_level_isValid;

    QList<OAIGuildRoleResponse> m_roles;
    bool m_roles_isSet;
    bool m_roles_isValid;

    qint32 m_default_message_notifications;
    bool m_default_message_notifications_isSet;
    bool m_default_message_notifications_isValid;

    qint32 m_mfa_level;
    bool m_mfa_level_isSet;
    bool m_mfa_level_isValid;

    qint32 m_explicit_content_filter;
    bool m_explicit_content_filter_isSet;
    bool m_explicit_content_filter_isValid;

    qint32 m_premium_tier;
    bool m_premium_tier_isSet;
    bool m_premium_tier_isValid;

    qint32 m_premium_subscription_count;
    bool m_premium_subscription_count_isSet;
    bool m_premium_subscription_count_isValid;

    QString m_preferred_locale;
    bool m_preferred_locale_isSet;
    bool m_preferred_locale_isValid;

    bool m_premium_progress_bar_enabled;
    bool m_premium_progress_bar_enabled_isSet;
    bool m_premium_progress_bar_enabled_isValid;

    bool m_nsfw;
    bool m_nsfw_isSet;
    bool m_nsfw_isValid;

    qint32 m_nsfw_level;
    bool m_nsfw_level_isSet;
    bool m_nsfw_level_isValid;

    QList<OAIEmojiResponse> m_emojis;
    bool m_emojis_isSet;
    bool m_emojis_isValid;

    QList<OAIGuildStickerResponse> m_stickers;
    bool m_stickers_isSet;
    bool m_stickers_isValid;

    QString m_icon;
    bool m_icon_isSet;
    bool m_icon_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    QString m_home_header;
    bool m_home_header_isSet;
    bool m_home_header_isValid;

    QString m_splash;
    bool m_splash_isSet;
    bool m_splash_isValid;

    QString m_discovery_splash;
    bool m_discovery_splash_isSet;
    bool m_discovery_splash_isValid;

    QString m_banner;
    bool m_banner_isSet;
    bool m_banner_isValid;

    QString m_application_id;
    bool m_application_id_isSet;
    bool m_application_id_isValid;

    QString m_afk_channel_id;
    bool m_afk_channel_id_isSet;
    bool m_afk_channel_id_isValid;

    QString m_system_channel_id;
    bool m_system_channel_id_isSet;
    bool m_system_channel_id_isValid;

    QString m_widget_channel_id;
    bool m_widget_channel_id_isSet;
    bool m_widget_channel_id_isValid;

    qint32 m_max_presences;
    bool m_max_presences_isSet;
    bool m_max_presences_isValid;

    qint32 m_max_members;
    bool m_max_members_isSet;
    bool m_max_members_isValid;

    qint32 m_max_stage_video_channel_users;
    bool m_max_stage_video_channel_users_isSet;
    bool m_max_stage_video_channel_users_isValid;

    qint32 m_max_video_channel_users;
    bool m_max_video_channel_users_isSet;
    bool m_max_video_channel_users_isValid;

    QString m_vanity_url_code;
    bool m_vanity_url_code_isSet;
    bool m_vanity_url_code_isValid;

    QString m_rules_channel_id;
    bool m_rules_channel_id_isSet;
    bool m_rules_channel_id_isValid;

    QString m_safety_alerts_channel_id;
    bool m_safety_alerts_channel_id_isSet;
    bool m_safety_alerts_channel_id_isValid;

    QString m_public_updates_channel_id;
    bool m_public_updates_channel_id_isSet;
    bool m_public_updates_channel_id_isValid;

    qint32 m_approximate_member_count;
    bool m_approximate_member_count_isSet;
    bool m_approximate_member_count_isValid;

    qint32 m_approximate_presence_count;
    bool m_approximate_presence_count_isSet;
    bool m_approximate_presence_count_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIGuildWithCountsResponse)

#endif // OAIGuildWithCountsResponse_H
