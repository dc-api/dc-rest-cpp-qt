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
 * OAIGuildTemplateSnapshotResponse.h
 *
 * 
 */

#ifndef OAIGuildTemplateSnapshotResponse_H
#define OAIGuildTemplateSnapshotResponse_H

#include <QJsonObject>

#include "OAIGuildTemplateChannelResponse.h"
#include "OAIGuildTemplateRoleResponse.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIGuildTemplateRoleResponse;
class OAIGuildTemplateChannelResponse;

class OAIGuildTemplateSnapshotResponse : public OAIObject {
public:
    OAIGuildTemplateSnapshotResponse();
    OAIGuildTemplateSnapshotResponse(QString json);
    ~OAIGuildTemplateSnapshotResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

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

    qint32 getSystemChannelFlags() const;
    void setSystemChannelFlags(const qint32 &system_channel_flags);
    bool is_system_channel_flags_Set() const;
    bool is_system_channel_flags_Valid() const;

    QList<OAIGuildTemplateRoleResponse> getRoles() const;
    void setRoles(const QList<OAIGuildTemplateRoleResponse> &roles);
    bool is_roles_Set() const;
    bool is_roles_Valid() const;

    QList<OAIGuildTemplateChannelResponse> getChannels() const;
    void setChannels(const QList<OAIGuildTemplateChannelResponse> &channels);
    bool is_channels_Set() const;
    bool is_channels_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getRegion() const;
    void setRegion(const QString &region);
    bool is_region_Set() const;
    bool is_region_Valid() const;

    QString getAfkChannelId() const;
    void setAfkChannelId(const QString &afk_channel_id);
    bool is_afk_channel_id_Set() const;
    bool is_afk_channel_id_Valid() const;

    QString getSystemChannelId() const;
    void setSystemChannelId(const QString &system_channel_id);
    bool is_system_channel_id_Set() const;
    bool is_system_channel_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

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

    qint32 m_system_channel_flags;
    bool m_system_channel_flags_isSet;
    bool m_system_channel_flags_isValid;

    QList<OAIGuildTemplateRoleResponse> m_roles;
    bool m_roles_isSet;
    bool m_roles_isValid;

    QList<OAIGuildTemplateChannelResponse> m_channels;
    bool m_channels_isSet;
    bool m_channels_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    QString m_region;
    bool m_region_isSet;
    bool m_region_isValid;

    QString m_afk_channel_id;
    bool m_afk_channel_id_isSet;
    bool m_afk_channel_id_isValid;

    QString m_system_channel_id;
    bool m_system_channel_id_isSet;
    bool m_system_channel_id_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIGuildTemplateSnapshotResponse)

#endif // OAIGuildTemplateSnapshotResponse_H
