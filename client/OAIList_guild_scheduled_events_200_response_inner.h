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
 * OAIList_guild_scheduled_events_200_response_inner.h
 *
 * 
 */

#ifndef OAIList_guild_scheduled_events_200_response_inner_H
#define OAIList_guild_scheduled_events_200_response_inner_H

#include <QJsonObject>

#include "OAIExternalScheduledEventResponse.h"
#include "OAIObject.h"
#include "OAIScheduledEventUserResponse.h"
#include "OAIStageScheduledEventResponse.h"
#include "OAIUserResponse.h"
#include "OAIVoiceScheduledEventResponse.h"
#include <QDateTime>
#include <QJsonValue>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIUserResponse;
class OAIScheduledEventUserResponse;

class OAIList_guild_scheduled_events_200_response_inner : public OAIObject {
public:
    OAIList_guild_scheduled_events_200_response_inner();
    OAIList_guild_scheduled_events_200_response_inner(QString json);
    ~OAIList_guild_scheduled_events_200_response_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getGuildId() const;
    void setGuildId(const QString &guild_id);
    bool is_guild_id_Set() const;
    bool is_guild_id_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QDateTime getScheduledStartTime() const;
    void setScheduledStartTime(const QDateTime &scheduled_start_time);
    bool is_scheduled_start_time_Set() const;
    bool is_scheduled_start_time_Valid() const;

    qint32 getStatus() const;
    void setStatus(const qint32 &status);
    bool is_status_Set() const;
    bool is_status_Valid() const;

    qint32 getEntityType() const;
    void setEntityType(const qint32 &entity_type);
    bool is_entity_type_Set() const;
    bool is_entity_type_Valid() const;

    QJsonValue getPrivacyLevel() const;
    void setPrivacyLevel(const QJsonValue &privacy_level);
    bool is_privacy_level_Set() const;
    bool is_privacy_level_Valid() const;

    OAIObject getEntityMetadata() const;
    void setEntityMetadata(const OAIObject &entity_metadata);
    bool is_entity_metadata_Set() const;
    bool is_entity_metadata_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getChannelId() const;
    void setChannelId(const QString &channel_id);
    bool is_channel_id_Set() const;
    bool is_channel_id_Valid() const;

    QString getCreatorId() const;
    void setCreatorId(const QString &creator_id);
    bool is_creator_id_Set() const;
    bool is_creator_id_Valid() const;

    OAIUserResponse getCreator() const;
    void setCreator(const OAIUserResponse &creator);
    bool is_creator_Set() const;
    bool is_creator_Valid() const;

    QString getImage() const;
    void setImage(const QString &image);
    bool is_image_Set() const;
    bool is_image_Valid() const;

    QDateTime getScheduledEndTime() const;
    void setScheduledEndTime(const QDateTime &scheduled_end_time);
    bool is_scheduled_end_time_Set() const;
    bool is_scheduled_end_time_Valid() const;

    QString getEntityId() const;
    void setEntityId(const QString &entity_id);
    bool is_entity_id_Set() const;
    bool is_entity_id_Valid() const;

    qint32 getUserCount() const;
    void setUserCount(const qint32 &user_count);
    bool is_user_count_Set() const;
    bool is_user_count_Valid() const;

    OAIScheduledEventUserResponse getUserRsvp() const;
    void setUserRsvp(const OAIScheduledEventUserResponse &user_rsvp);
    bool is_user_rsvp_Set() const;
    bool is_user_rsvp_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_guild_id;
    bool m_guild_id_isSet;
    bool m_guild_id_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    QDateTime m_scheduled_start_time;
    bool m_scheduled_start_time_isSet;
    bool m_scheduled_start_time_isValid;

    qint32 m_status;
    bool m_status_isSet;
    bool m_status_isValid;

    qint32 m_entity_type;
    bool m_entity_type_isSet;
    bool m_entity_type_isValid;

    QJsonValue m_privacy_level;
    bool m_privacy_level_isSet;
    bool m_privacy_level_isValid;

    OAIObject m_entity_metadata;
    bool m_entity_metadata_isSet;
    bool m_entity_metadata_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    QString m_channel_id;
    bool m_channel_id_isSet;
    bool m_channel_id_isValid;

    QString m_creator_id;
    bool m_creator_id_isSet;
    bool m_creator_id_isValid;

    OAIUserResponse m_creator;
    bool m_creator_isSet;
    bool m_creator_isValid;

    QString m_image;
    bool m_image_isSet;
    bool m_image_isValid;

    QDateTime m_scheduled_end_time;
    bool m_scheduled_end_time_isSet;
    bool m_scheduled_end_time_isValid;

    QString m_entity_id;
    bool m_entity_id_isSet;
    bool m_entity_id_isValid;

    qint32 m_user_count;
    bool m_user_count_isSet;
    bool m_user_count_isValid;

    OAIScheduledEventUserResponse m_user_rsvp;
    bool m_user_rsvp_isSet;
    bool m_user_rsvp_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIList_guild_scheduled_events_200_response_inner)

#endif // OAIList_guild_scheduled_events_200_response_inner_H
