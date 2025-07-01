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
 * OAICreatedThreadResponse.h
 *
 * 
 */

#ifndef OAICreatedThreadResponse_H
#define OAICreatedThreadResponse_H

#include <QJsonObject>

#include "OAIThreadMemberResponse.h"
#include "OAIThreadMetadataResponse.h"
#include <QDateTime>
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIThreadMetadataResponse;
class OAIThreadMemberResponse;

class OAICreatedThreadResponse : public OAIObject {
public:
    OAICreatedThreadResponse();
    OAICreatedThreadResponse(QString json);
    ~OAICreatedThreadResponse() override;

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

    QString getOwnerId() const;
    void setOwnerId(const QString &owner_id);
    bool is_owner_id_Set() const;
    bool is_owner_id_Valid() const;

    qint32 getMessageCount() const;
    void setMessageCount(const qint32 &message_count);
    bool is_message_count_Set() const;
    bool is_message_count_Valid() const;

    qint32 getMemberCount() const;
    void setMemberCount(const qint32 &member_count);
    bool is_member_count_Set() const;
    bool is_member_count_Valid() const;

    qint32 getTotalMessageSent() const;
    void setTotalMessageSent(const qint32 &total_message_sent);
    bool is_total_message_sent_Set() const;
    bool is_total_message_sent_Valid() const;

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

    OAIThreadMetadataResponse getThreadMetadata() const;
    void setThreadMetadata(const OAIThreadMetadataResponse &thread_metadata);
    bool is_thread_metadata_Set() const;
    bool is_thread_metadata_Valid() const;

    QList<QString> getAppliedTags() const;
    void setAppliedTags(const QList<QString> &applied_tags);
    bool is_applied_tags_Set() const;
    bool is_applied_tags_Valid() const;

    OAIThreadMemberResponse getMember() const;
    void setMember(const OAIThreadMemberResponse &member);
    bool is_member_Set() const;
    bool is_member_Valid() const;

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

    QString m_owner_id;
    bool m_owner_id_isSet;
    bool m_owner_id_isValid;

    qint32 m_message_count;
    bool m_message_count_isSet;
    bool m_message_count_isValid;

    qint32 m_member_count;
    bool m_member_count_isSet;
    bool m_member_count_isValid;

    qint32 m_total_message_sent;
    bool m_total_message_sent_isSet;
    bool m_total_message_sent_isValid;

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

    OAIThreadMetadataResponse m_thread_metadata;
    bool m_thread_metadata_isSet;
    bool m_thread_metadata_isValid;

    QList<QString> m_applied_tags;
    bool m_applied_tags_isSet;
    bool m_applied_tags_isValid;

    OAIThreadMemberResponse m_member;
    bool m_member_isSet;
    bool m_member_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAICreatedThreadResponse)

#endif // OAICreatedThreadResponse_H
