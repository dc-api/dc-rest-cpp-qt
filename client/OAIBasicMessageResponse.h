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
 * OAIBasicMessageResponse.h
 *
 * 
 */

#ifndef OAIBasicMessageResponse_H
#define OAIBasicMessageResponse_H

#include <QJsonObject>

#include "OAIBasicApplicationResponse.h"
#include "OAIBasicMessageResponse_components_inner.h"
#include "OAIBasicMessageResponse_interaction_metadata.h"
#include "OAIBasicMessageResponse_nonce.h"
#include "OAIGet_sticker_200_response.h"
#include "OAIMessageAttachmentResponse.h"
#include "OAIMessageCallResponse.h"
#include "OAIMessageEmbedResponse.h"
#include "OAIMessageInteractionResponse.h"
#include "OAIMessageMentionChannelResponse.h"
#include "OAIMessageReferenceResponse.h"
#include "OAIMessageRoleSubscriptionDataResponse.h"
#include "OAIMessageSnapshotResponse.h"
#include "OAIMessageStickerItemResponse.h"
#include "OAIObject.h"
#include "OAIPollResponse.h"
#include "OAIPurchaseNotificationResponse.h"
#include "OAIResolvedObjectsResponse.h"
#include "OAIThreadResponse.h"
#include "OAIUserResponse.h"
#include <QDateTime>
#include <QList>
#include <QSet>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIUserResponse;
class OAIMessageAttachmentResponse;
class OAIMessageEmbedResponse;
class OAIBasicMessageResponse_components_inner;
class OAIResolvedObjectsResponse;
class OAIGet_sticker_200_response;
class OAIMessageStickerItemResponse;
class OAIMessageCallResponse;
class OAIBasicApplicationResponse;
class OAIMessageInteractionResponse;
class OAIMessageReferenceResponse;
class OAIThreadResponse;
class OAIMessageMentionChannelResponse;
class OAIMessageRoleSubscriptionDataResponse;
class OAIPurchaseNotificationResponse;
class OAIPollResponse;
class OAIBasicMessageResponse_interaction_metadata;
class OAIMessageSnapshotResponse;

class OAIBasicMessageResponse : public OAIObject {
public:
    OAIBasicMessageResponse();
    OAIBasicMessageResponse(QString json);
    ~OAIBasicMessageResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getType() const;
    void setType(const qint32 &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    QString getContent() const;
    void setContent(const QString &content);
    bool is_content_Set() const;
    bool is_content_Valid() const;

    QList<OAIUserResponse> getMentions() const;
    void setMentions(const QList<OAIUserResponse> &mentions);
    bool is_mentions_Set() const;
    bool is_mentions_Valid() const;

    QSet<QString> getMentionRoles() const;
    void setMentionRoles(const QSet<QString> &mention_roles);
    bool is_mention_roles_Set() const;
    bool is_mention_roles_Valid() const;

    QList<OAIMessageAttachmentResponse> getAttachments() const;
    void setAttachments(const QList<OAIMessageAttachmentResponse> &attachments);
    bool is_attachments_Set() const;
    bool is_attachments_Valid() const;

    QList<OAIMessageEmbedResponse> getEmbeds() const;
    void setEmbeds(const QList<OAIMessageEmbedResponse> &embeds);
    bool is_embeds_Set() const;
    bool is_embeds_Valid() const;

    QDateTime getTimestamp() const;
    void setTimestamp(const QDateTime &timestamp);
    bool is_timestamp_Set() const;
    bool is_timestamp_Valid() const;

    qint32 getFlags() const;
    void setFlags(const qint32 &flags);
    bool is_flags_Set() const;
    bool is_flags_Valid() const;

    QList<OAIBasicMessageResponse_components_inner> getComponents() const;
    void setComponents(const QList<OAIBasicMessageResponse_components_inner> &components);
    bool is_components_Set() const;
    bool is_components_Valid() const;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getChannelId() const;
    void setChannelId(const QString &channel_id);
    bool is_channel_id_Set() const;
    bool is_channel_id_Valid() const;

    OAIUserResponse getAuthor() const;
    void setAuthor(const OAIUserResponse &author);
    bool is_author_Set() const;
    bool is_author_Valid() const;

    bool isPinned() const;
    void setPinned(const bool &pinned);
    bool is_pinned_Set() const;
    bool is_pinned_Valid() const;

    bool isMentionEveryone() const;
    void setMentionEveryone(const bool &mention_everyone);
    bool is_mention_everyone_Set() const;
    bool is_mention_everyone_Valid() const;

    bool isTts() const;
    void setTts(const bool &tts);
    bool is_tts_Set() const;
    bool is_tts_Valid() const;

    QDateTime getEditedTimestamp() const;
    void setEditedTimestamp(const QDateTime &edited_timestamp);
    bool is_edited_timestamp_Set() const;
    bool is_edited_timestamp_Valid() const;

    OAIResolvedObjectsResponse getResolved() const;
    void setResolved(const OAIResolvedObjectsResponse &resolved);
    bool is_resolved_Set() const;
    bool is_resolved_Valid() const;

    QList<OAIGet_sticker_200_response> getStickers() const;
    void setStickers(const QList<OAIGet_sticker_200_response> &stickers);
    bool is_stickers_Set() const;
    bool is_stickers_Valid() const;

    QList<OAIMessageStickerItemResponse> getStickerItems() const;
    void setStickerItems(const QList<OAIMessageStickerItemResponse> &sticker_items);
    bool is_sticker_items_Set() const;
    bool is_sticker_items_Valid() const;

    OAIMessageCallResponse getCall() const;
    void setCall(const OAIMessageCallResponse &call);
    bool is_call_Set() const;
    bool is_call_Valid() const;

    OAIObject getActivity() const;
    void setActivity(const OAIObject &activity);
    bool is_activity_Set() const;
    bool is_activity_Valid() const;

    OAIBasicApplicationResponse getApplication() const;
    void setApplication(const OAIBasicApplicationResponse &application);
    bool is_application_Set() const;
    bool is_application_Valid() const;

    QString getApplicationId() const;
    void setApplicationId(const QString &application_id);
    bool is_application_id_Set() const;
    bool is_application_id_Valid() const;

    OAIMessageInteractionResponse getInteraction() const;
    void setInteraction(const OAIMessageInteractionResponse &interaction);
    bool is_interaction_Set() const;
    bool is_interaction_Valid() const;

    OAIBasicMessageResponse_nonce getNonce() const;
    void setNonce(const OAIBasicMessageResponse_nonce &nonce);
    bool is_nonce_Set() const;
    bool is_nonce_Valid() const;

    QString getWebhookId() const;
    void setWebhookId(const QString &webhook_id);
    bool is_webhook_id_Set() const;
    bool is_webhook_id_Valid() const;

    OAIMessageReferenceResponse getMessageReference() const;
    void setMessageReference(const OAIMessageReferenceResponse &message_reference);
    bool is_message_reference_Set() const;
    bool is_message_reference_Valid() const;

    OAIThreadResponse getThread() const;
    void setThread(const OAIThreadResponse &thread);
    bool is_thread_Set() const;
    bool is_thread_Valid() const;

    QList<OAIMessageMentionChannelResponse> getMentionChannels() const;
    void setMentionChannels(const QList<OAIMessageMentionChannelResponse> &mention_channels);
    bool is_mention_channels_Set() const;
    bool is_mention_channels_Valid() const;

    OAIMessageRoleSubscriptionDataResponse getRoleSubscriptionData() const;
    void setRoleSubscriptionData(const OAIMessageRoleSubscriptionDataResponse &role_subscription_data);
    bool is_role_subscription_data_Set() const;
    bool is_role_subscription_data_Valid() const;

    OAIPurchaseNotificationResponse getPurchaseNotification() const;
    void setPurchaseNotification(const OAIPurchaseNotificationResponse &purchase_notification);
    bool is_purchase_notification_Set() const;
    bool is_purchase_notification_Valid() const;

    qint32 getPosition() const;
    void setPosition(const qint32 &position);
    bool is_position_Set() const;
    bool is_position_Valid() const;

    OAIPollResponse getPoll() const;
    void setPoll(const OAIPollResponse &poll);
    bool is_poll_Set() const;
    bool is_poll_Valid() const;

    OAIBasicMessageResponse_interaction_metadata getInteractionMetadata() const;
    void setInteractionMetadata(const OAIBasicMessageResponse_interaction_metadata &interaction_metadata);
    bool is_interaction_metadata_Set() const;
    bool is_interaction_metadata_Valid() const;

    QList<OAIMessageSnapshotResponse> getMessageSnapshots() const;
    void setMessageSnapshots(const QList<OAIMessageSnapshotResponse> &message_snapshots);
    bool is_message_snapshots_Set() const;
    bool is_message_snapshots_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    QString m_content;
    bool m_content_isSet;
    bool m_content_isValid;

    QList<OAIUserResponse> m_mentions;
    bool m_mentions_isSet;
    bool m_mentions_isValid;

    QSet<QString> m_mention_roles;
    bool m_mention_roles_isSet;
    bool m_mention_roles_isValid;

    QList<OAIMessageAttachmentResponse> m_attachments;
    bool m_attachments_isSet;
    bool m_attachments_isValid;

    QList<OAIMessageEmbedResponse> m_embeds;
    bool m_embeds_isSet;
    bool m_embeds_isValid;

    QDateTime m_timestamp;
    bool m_timestamp_isSet;
    bool m_timestamp_isValid;

    qint32 m_flags;
    bool m_flags_isSet;
    bool m_flags_isValid;

    QList<OAIBasicMessageResponse_components_inner> m_components;
    bool m_components_isSet;
    bool m_components_isValid;

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_channel_id;
    bool m_channel_id_isSet;
    bool m_channel_id_isValid;

    OAIUserResponse m_author;
    bool m_author_isSet;
    bool m_author_isValid;

    bool m_pinned;
    bool m_pinned_isSet;
    bool m_pinned_isValid;

    bool m_mention_everyone;
    bool m_mention_everyone_isSet;
    bool m_mention_everyone_isValid;

    bool m_tts;
    bool m_tts_isSet;
    bool m_tts_isValid;

    QDateTime m_edited_timestamp;
    bool m_edited_timestamp_isSet;
    bool m_edited_timestamp_isValid;

    OAIResolvedObjectsResponse m_resolved;
    bool m_resolved_isSet;
    bool m_resolved_isValid;

    QList<OAIGet_sticker_200_response> m_stickers;
    bool m_stickers_isSet;
    bool m_stickers_isValid;

    QList<OAIMessageStickerItemResponse> m_sticker_items;
    bool m_sticker_items_isSet;
    bool m_sticker_items_isValid;

    OAIMessageCallResponse m_call;
    bool m_call_isSet;
    bool m_call_isValid;

    OAIObject m_activity;
    bool m_activity_isSet;
    bool m_activity_isValid;

    OAIBasicApplicationResponse m_application;
    bool m_application_isSet;
    bool m_application_isValid;

    QString m_application_id;
    bool m_application_id_isSet;
    bool m_application_id_isValid;

    OAIMessageInteractionResponse m_interaction;
    bool m_interaction_isSet;
    bool m_interaction_isValid;

    OAIBasicMessageResponse_nonce m_nonce;
    bool m_nonce_isSet;
    bool m_nonce_isValid;

    QString m_webhook_id;
    bool m_webhook_id_isSet;
    bool m_webhook_id_isValid;

    OAIMessageReferenceResponse m_message_reference;
    bool m_message_reference_isSet;
    bool m_message_reference_isValid;

    OAIThreadResponse m_thread;
    bool m_thread_isSet;
    bool m_thread_isValid;

    QList<OAIMessageMentionChannelResponse> m_mention_channels;
    bool m_mention_channels_isSet;
    bool m_mention_channels_isValid;

    OAIMessageRoleSubscriptionDataResponse m_role_subscription_data;
    bool m_role_subscription_data_isSet;
    bool m_role_subscription_data_isValid;

    OAIPurchaseNotificationResponse m_purchase_notification;
    bool m_purchase_notification_isSet;
    bool m_purchase_notification_isValid;

    qint32 m_position;
    bool m_position_isSet;
    bool m_position_isValid;

    OAIPollResponse m_poll;
    bool m_poll_isSet;
    bool m_poll_isValid;

    OAIBasicMessageResponse_interaction_metadata m_interaction_metadata;
    bool m_interaction_metadata_isSet;
    bool m_interaction_metadata_isValid;

    QList<OAIMessageSnapshotResponse> m_message_snapshots;
    bool m_message_snapshots_isSet;
    bool m_message_snapshots_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIBasicMessageResponse)

#endif // OAIBasicMessageResponse_H
