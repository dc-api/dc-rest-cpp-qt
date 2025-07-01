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
 * OAIGuildPatchRequestPartial.h
 *
 * 
 */

#ifndef OAIGuildPatchRequestPartial_H
#define OAIGuildPatchRequestPartial_H

#include <QJsonObject>

#include <QSet>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {

class OAIGuildPatchRequestPartial : public OAIObject {
public:
    OAIGuildPatchRequestPartial();
    OAIGuildPatchRequestPartial(QString json);
    ~OAIGuildPatchRequestPartial() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getRegion() const;
    void setRegion(const QString &region);
    bool is_region_Set() const;
    bool is_region_Valid() const;

    QString getIcon() const;
    void setIcon(const QString &icon);
    bool is_icon_Set() const;
    bool is_icon_Valid() const;

    qint32 getVerificationLevel() const;
    void setVerificationLevel(const qint32 &verification_level);
    bool is_verification_level_Set() const;
    bool is_verification_level_Valid() const;

    qint32 getDefaultMessageNotifications() const;
    void setDefaultMessageNotifications(const qint32 &default_message_notifications);
    bool is_default_message_notifications_Set() const;
    bool is_default_message_notifications_Valid() const;

    qint32 getExplicitContentFilter() const;
    void setExplicitContentFilter(const qint32 &explicit_content_filter);
    bool is_explicit_content_filter_Set() const;
    bool is_explicit_content_filter_Valid() const;

    QString getPreferredLocale() const;
    void setPreferredLocale(const QString &preferred_locale);
    bool is_preferred_locale_Set() const;
    bool is_preferred_locale_Valid() const;

    qint32 getAfkTimeout() const;
    void setAfkTimeout(const qint32 &afk_timeout);
    bool is_afk_timeout_Set() const;
    bool is_afk_timeout_Valid() const;

    QString getAfkChannelId() const;
    void setAfkChannelId(const QString &afk_channel_id);
    bool is_afk_channel_id_Set() const;
    bool is_afk_channel_id_Valid() const;

    QString getSystemChannelId() const;
    void setSystemChannelId(const QString &system_channel_id);
    bool is_system_channel_id_Set() const;
    bool is_system_channel_id_Valid() const;

    QString getOwnerId() const;
    void setOwnerId(const QString &owner_id);
    bool is_owner_id_Set() const;
    bool is_owner_id_Valid() const;

    QString getSplash() const;
    void setSplash(const QString &splash);
    bool is_splash_Set() const;
    bool is_splash_Valid() const;

    QString getBanner() const;
    void setBanner(const QString &banner);
    bool is_banner_Set() const;
    bool is_banner_Valid() const;

    qint32 getSystemChannelFlags() const;
    void setSystemChannelFlags(const qint32 &system_channel_flags);
    bool is_system_channel_flags_Set() const;
    bool is_system_channel_flags_Valid() const;

    QSet<QString> getFeatures() const;
    void setFeatures(const QSet<QString> &features);
    bool is_features_Set() const;
    bool is_features_Valid() const;

    QString getDiscoverySplash() const;
    void setDiscoverySplash(const QString &discovery_splash);
    bool is_discovery_splash_Set() const;
    bool is_discovery_splash_Valid() const;

    QString getHomeHeader() const;
    void setHomeHeader(const QString &home_header);
    bool is_home_header_Set() const;
    bool is_home_header_Valid() const;

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

    bool isPremiumProgressBarEnabled() const;
    void setPremiumProgressBarEnabled(const bool &premium_progress_bar_enabled);
    bool is_premium_progress_bar_enabled_Set() const;
    bool is_premium_progress_bar_enabled_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    QString m_region;
    bool m_region_isSet;
    bool m_region_isValid;

    QString m_icon;
    bool m_icon_isSet;
    bool m_icon_isValid;

    qint32 m_verification_level;
    bool m_verification_level_isSet;
    bool m_verification_level_isValid;

    qint32 m_default_message_notifications;
    bool m_default_message_notifications_isSet;
    bool m_default_message_notifications_isValid;

    qint32 m_explicit_content_filter;
    bool m_explicit_content_filter_isSet;
    bool m_explicit_content_filter_isValid;

    QString m_preferred_locale;
    bool m_preferred_locale_isSet;
    bool m_preferred_locale_isValid;

    qint32 m_afk_timeout;
    bool m_afk_timeout_isSet;
    bool m_afk_timeout_isValid;

    QString m_afk_channel_id;
    bool m_afk_channel_id_isSet;
    bool m_afk_channel_id_isValid;

    QString m_system_channel_id;
    bool m_system_channel_id_isSet;
    bool m_system_channel_id_isValid;

    QString m_owner_id;
    bool m_owner_id_isSet;
    bool m_owner_id_isValid;

    QString m_splash;
    bool m_splash_isSet;
    bool m_splash_isValid;

    QString m_banner;
    bool m_banner_isSet;
    bool m_banner_isValid;

    qint32 m_system_channel_flags;
    bool m_system_channel_flags_isSet;
    bool m_system_channel_flags_isValid;

    QSet<QString> m_features;
    bool m_features_isSet;
    bool m_features_isValid;

    QString m_discovery_splash;
    bool m_discovery_splash_isSet;
    bool m_discovery_splash_isValid;

    QString m_home_header;
    bool m_home_header_isSet;
    bool m_home_header_isValid;

    QString m_rules_channel_id;
    bool m_rules_channel_id_isSet;
    bool m_rules_channel_id_isValid;

    QString m_safety_alerts_channel_id;
    bool m_safety_alerts_channel_id_isSet;
    bool m_safety_alerts_channel_id_isValid;

    QString m_public_updates_channel_id;
    bool m_public_updates_channel_id_isSet;
    bool m_public_updates_channel_id_isValid;

    bool m_premium_progress_bar_enabled;
    bool m_premium_progress_bar_enabled_isSet;
    bool m_premium_progress_bar_enabled_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIGuildPatchRequestPartial)

#endif // OAIGuildPatchRequestPartial_H
