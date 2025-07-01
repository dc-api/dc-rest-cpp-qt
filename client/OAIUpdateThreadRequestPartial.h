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
 * OAIUpdateThreadRequestPartial.h
 *
 * 
 */

#ifndef OAIUpdateThreadRequestPartial_H
#define OAIUpdateThreadRequestPartial_H

#include <QJsonObject>

#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {

class OAIUpdateThreadRequestPartial : public OAIObject {
public:
    OAIUpdateThreadRequestPartial();
    OAIUpdateThreadRequestPartial(QString json);
    ~OAIUpdateThreadRequestPartial() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    bool isArchived() const;
    void setArchived(const bool &archived);
    bool is_archived_Set() const;
    bool is_archived_Valid() const;

    bool isLocked() const;
    void setLocked(const bool &locked);
    bool is_locked_Set() const;
    bool is_locked_Valid() const;

    bool isInvitable() const;
    void setInvitable(const bool &invitable);
    bool is_invitable_Set() const;
    bool is_invitable_Valid() const;

    qint32 getAutoArchiveDuration() const;
    void setAutoArchiveDuration(const qint32 &auto_archive_duration);
    bool is_auto_archive_duration_Set() const;
    bool is_auto_archive_duration_Valid() const;

    qint32 getRateLimitPerUser() const;
    void setRateLimitPerUser(const qint32 &rate_limit_per_user);
    bool is_rate_limit_per_user_Set() const;
    bool is_rate_limit_per_user_Valid() const;

    qint32 getFlags() const;
    void setFlags(const qint32 &flags);
    bool is_flags_Set() const;
    bool is_flags_Valid() const;

    QList<QString> getAppliedTags() const;
    void setAppliedTags(const QList<QString> &applied_tags);
    bool is_applied_tags_Set() const;
    bool is_applied_tags_Valid() const;

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

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    bool m_archived;
    bool m_archived_isSet;
    bool m_archived_isValid;

    bool m_locked;
    bool m_locked_isSet;
    bool m_locked_isValid;

    bool m_invitable;
    bool m_invitable_isSet;
    bool m_invitable_isValid;

    qint32 m_auto_archive_duration;
    bool m_auto_archive_duration_isSet;
    bool m_auto_archive_duration_isValid;

    qint32 m_rate_limit_per_user;
    bool m_rate_limit_per_user_isSet;
    bool m_rate_limit_per_user_isValid;

    qint32 m_flags;
    bool m_flags_isSet;
    bool m_flags_isValid;

    QList<QString> m_applied_tags;
    bool m_applied_tags_isSet;
    bool m_applied_tags_isValid;

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
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIUpdateThreadRequestPartial)

#endif // OAIUpdateThreadRequestPartial_H
