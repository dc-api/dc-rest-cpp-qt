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

#include "OAIMessageResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIMessageResponse::OAIMessageResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMessageResponse::OAIMessageResponse() {
    this->initializeModel();
}

OAIMessageResponse::~OAIMessageResponse() {}

void OAIMessageResponse::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_content_isSet = false;
    m_content_isValid = false;

    m_mentions_isSet = false;
    m_mentions_isValid = false;

    m_mention_roles_isSet = false;
    m_mention_roles_isValid = false;

    m_attachments_isSet = false;
    m_attachments_isValid = false;

    m_embeds_isSet = false;
    m_embeds_isValid = false;

    m_timestamp_isSet = false;
    m_timestamp_isValid = false;

    m_flags_isSet = false;
    m_flags_isValid = false;

    m_components_isSet = false;
    m_components_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_channel_id_isSet = false;
    m_channel_id_isValid = false;

    m_author_isSet = false;
    m_author_isValid = false;

    m_pinned_isSet = false;
    m_pinned_isValid = false;

    m_mention_everyone_isSet = false;
    m_mention_everyone_isValid = false;

    m_tts_isSet = false;
    m_tts_isValid = false;

    m_edited_timestamp_isSet = false;
    m_edited_timestamp_isValid = false;

    m_resolved_isSet = false;
    m_resolved_isValid = false;

    m_stickers_isSet = false;
    m_stickers_isValid = false;

    m_sticker_items_isSet = false;
    m_sticker_items_isValid = false;

    m_call_isSet = false;
    m_call_isValid = false;

    m_activity_isSet = false;
    m_activity_isValid = false;

    m_application_isSet = false;
    m_application_isValid = false;

    m_application_id_isSet = false;
    m_application_id_isValid = false;

    m_interaction_isSet = false;
    m_interaction_isValid = false;

    m_nonce_isSet = false;
    m_nonce_isValid = false;

    m_webhook_id_isSet = false;
    m_webhook_id_isValid = false;

    m_message_reference_isSet = false;
    m_message_reference_isValid = false;

    m_thread_isSet = false;
    m_thread_isValid = false;

    m_mention_channels_isSet = false;
    m_mention_channels_isValid = false;

    m_role_subscription_data_isSet = false;
    m_role_subscription_data_isValid = false;

    m_purchase_notification_isSet = false;
    m_purchase_notification_isValid = false;

    m_position_isSet = false;
    m_position_isValid = false;

    m_poll_isSet = false;
    m_poll_isValid = false;

    m_interaction_metadata_isSet = false;
    m_interaction_metadata_isValid = false;

    m_message_snapshots_isSet = false;
    m_message_snapshots_isValid = false;

    m_reactions_isSet = false;
    m_reactions_isValid = false;

    m_referenced_message_isSet = false;
    m_referenced_message_isValid = false;
}

void OAIMessageResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMessageResponse::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_content_isValid = ::dc_rest::fromJsonValue(m_content, json[QString("content")]);
    m_content_isSet = !json[QString("content")].isNull() && m_content_isValid;

    m_mentions_isValid = ::dc_rest::fromJsonValue(m_mentions, json[QString("mentions")]);
    m_mentions_isSet = !json[QString("mentions")].isNull() && m_mentions_isValid;

    m_mention_roles_isValid = ::dc_rest::fromJsonValue(m_mention_roles, json[QString("mention_roles")]);
    m_mention_roles_isSet = !json[QString("mention_roles")].isNull() && m_mention_roles_isValid;

    m_attachments_isValid = ::dc_rest::fromJsonValue(m_attachments, json[QString("attachments")]);
    m_attachments_isSet = !json[QString("attachments")].isNull() && m_attachments_isValid;

    m_embeds_isValid = ::dc_rest::fromJsonValue(m_embeds, json[QString("embeds")]);
    m_embeds_isSet = !json[QString("embeds")].isNull() && m_embeds_isValid;

    m_timestamp_isValid = ::dc_rest::fromJsonValue(m_timestamp, json[QString("timestamp")]);
    m_timestamp_isSet = !json[QString("timestamp")].isNull() && m_timestamp_isValid;

    m_flags_isValid = ::dc_rest::fromJsonValue(m_flags, json[QString("flags")]);
    m_flags_isSet = !json[QString("flags")].isNull() && m_flags_isValid;

    m_components_isValid = ::dc_rest::fromJsonValue(m_components, json[QString("components")]);
    m_components_isSet = !json[QString("components")].isNull() && m_components_isValid;

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_channel_id_isValid = ::dc_rest::fromJsonValue(m_channel_id, json[QString("channel_id")]);
    m_channel_id_isSet = !json[QString("channel_id")].isNull() && m_channel_id_isValid;

    m_author_isValid = ::dc_rest::fromJsonValue(m_author, json[QString("author")]);
    m_author_isSet = !json[QString("author")].isNull() && m_author_isValid;

    m_pinned_isValid = ::dc_rest::fromJsonValue(m_pinned, json[QString("pinned")]);
    m_pinned_isSet = !json[QString("pinned")].isNull() && m_pinned_isValid;

    m_mention_everyone_isValid = ::dc_rest::fromJsonValue(m_mention_everyone, json[QString("mention_everyone")]);
    m_mention_everyone_isSet = !json[QString("mention_everyone")].isNull() && m_mention_everyone_isValid;

    m_tts_isValid = ::dc_rest::fromJsonValue(m_tts, json[QString("tts")]);
    m_tts_isSet = !json[QString("tts")].isNull() && m_tts_isValid;

    m_edited_timestamp_isValid = ::dc_rest::fromJsonValue(m_edited_timestamp, json[QString("edited_timestamp")]);
    m_edited_timestamp_isSet = !json[QString("edited_timestamp")].isNull() && m_edited_timestamp_isValid;

    m_resolved_isValid = ::dc_rest::fromJsonValue(m_resolved, json[QString("resolved")]);
    m_resolved_isSet = !json[QString("resolved")].isNull() && m_resolved_isValid;

    m_stickers_isValid = ::dc_rest::fromJsonValue(m_stickers, json[QString("stickers")]);
    m_stickers_isSet = !json[QString("stickers")].isNull() && m_stickers_isValid;

    m_sticker_items_isValid = ::dc_rest::fromJsonValue(m_sticker_items, json[QString("sticker_items")]);
    m_sticker_items_isSet = !json[QString("sticker_items")].isNull() && m_sticker_items_isValid;

    m_call_isValid = ::dc_rest::fromJsonValue(m_call, json[QString("call")]);
    m_call_isSet = !json[QString("call")].isNull() && m_call_isValid;

    m_activity_isValid = ::dc_rest::fromJsonValue(m_activity, json[QString("activity")]);
    m_activity_isSet = !json[QString("activity")].isNull() && m_activity_isValid;

    m_application_isValid = ::dc_rest::fromJsonValue(m_application, json[QString("application")]);
    m_application_isSet = !json[QString("application")].isNull() && m_application_isValid;

    m_application_id_isValid = ::dc_rest::fromJsonValue(m_application_id, json[QString("application_id")]);
    m_application_id_isSet = !json[QString("application_id")].isNull() && m_application_id_isValid;

    m_interaction_isValid = ::dc_rest::fromJsonValue(m_interaction, json[QString("interaction")]);
    m_interaction_isSet = !json[QString("interaction")].isNull() && m_interaction_isValid;

    m_nonce_isValid = ::dc_rest::fromJsonValue(m_nonce, json[QString("nonce")]);
    m_nonce_isSet = !json[QString("nonce")].isNull() && m_nonce_isValid;

    m_webhook_id_isValid = ::dc_rest::fromJsonValue(m_webhook_id, json[QString("webhook_id")]);
    m_webhook_id_isSet = !json[QString("webhook_id")].isNull() && m_webhook_id_isValid;

    m_message_reference_isValid = ::dc_rest::fromJsonValue(m_message_reference, json[QString("message_reference")]);
    m_message_reference_isSet = !json[QString("message_reference")].isNull() && m_message_reference_isValid;

    m_thread_isValid = ::dc_rest::fromJsonValue(m_thread, json[QString("thread")]);
    m_thread_isSet = !json[QString("thread")].isNull() && m_thread_isValid;

    m_mention_channels_isValid = ::dc_rest::fromJsonValue(m_mention_channels, json[QString("mention_channels")]);
    m_mention_channels_isSet = !json[QString("mention_channels")].isNull() && m_mention_channels_isValid;

    m_role_subscription_data_isValid = ::dc_rest::fromJsonValue(m_role_subscription_data, json[QString("role_subscription_data")]);
    m_role_subscription_data_isSet = !json[QString("role_subscription_data")].isNull() && m_role_subscription_data_isValid;

    m_purchase_notification_isValid = ::dc_rest::fromJsonValue(m_purchase_notification, json[QString("purchase_notification")]);
    m_purchase_notification_isSet = !json[QString("purchase_notification")].isNull() && m_purchase_notification_isValid;

    m_position_isValid = ::dc_rest::fromJsonValue(m_position, json[QString("position")]);
    m_position_isSet = !json[QString("position")].isNull() && m_position_isValid;

    m_poll_isValid = ::dc_rest::fromJsonValue(m_poll, json[QString("poll")]);
    m_poll_isSet = !json[QString("poll")].isNull() && m_poll_isValid;

    m_interaction_metadata_isValid = ::dc_rest::fromJsonValue(m_interaction_metadata, json[QString("interaction_metadata")]);
    m_interaction_metadata_isSet = !json[QString("interaction_metadata")].isNull() && m_interaction_metadata_isValid;

    m_message_snapshots_isValid = ::dc_rest::fromJsonValue(m_message_snapshots, json[QString("message_snapshots")]);
    m_message_snapshots_isSet = !json[QString("message_snapshots")].isNull() && m_message_snapshots_isValid;

    m_reactions_isValid = ::dc_rest::fromJsonValue(m_reactions, json[QString("reactions")]);
    m_reactions_isSet = !json[QString("reactions")].isNull() && m_reactions_isValid;

    m_referenced_message_isValid = ::dc_rest::fromJsonValue(m_referenced_message, json[QString("referenced_message")]);
    m_referenced_message_isSet = !json[QString("referenced_message")].isNull() && m_referenced_message_isValid;
}

QString OAIMessageResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMessageResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_content_isSet) {
        obj.insert(QString("content"), ::dc_rest::toJsonValue(m_content));
    }
    if (m_mentions.size() > 0) {
        obj.insert(QString("mentions"), ::dc_rest::toJsonValue(m_mentions));
    }
    if (m_mention_roles.size() > 0) {
        obj.insert(QString("mention_roles"), ::dc_rest::toJsonValue(m_mention_roles));
    }
    if (m_attachments.size() > 0) {
        obj.insert(QString("attachments"), ::dc_rest::toJsonValue(m_attachments));
    }
    if (m_embeds.size() > 0) {
        obj.insert(QString("embeds"), ::dc_rest::toJsonValue(m_embeds));
    }
    if (m_timestamp_isSet) {
        obj.insert(QString("timestamp"), ::dc_rest::toJsonValue(m_timestamp));
    }
    if (m_flags_isSet) {
        obj.insert(QString("flags"), ::dc_rest::toJsonValue(m_flags));
    }
    if (m_components.size() > 0) {
        obj.insert(QString("components"), ::dc_rest::toJsonValue(m_components));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_channel_id_isSet) {
        obj.insert(QString("channel_id"), ::dc_rest::toJsonValue(m_channel_id));
    }
    if (m_author.isSet()) {
        obj.insert(QString("author"), ::dc_rest::toJsonValue(m_author));
    }
    if (m_pinned_isSet) {
        obj.insert(QString("pinned"), ::dc_rest::toJsonValue(m_pinned));
    }
    if (m_mention_everyone_isSet) {
        obj.insert(QString("mention_everyone"), ::dc_rest::toJsonValue(m_mention_everyone));
    }
    if (m_tts_isSet) {
        obj.insert(QString("tts"), ::dc_rest::toJsonValue(m_tts));
    }
    if (m_edited_timestamp_isSet) {
        obj.insert(QString("edited_timestamp"), ::dc_rest::toJsonValue(m_edited_timestamp));
    }
    if (m_resolved.isSet()) {
        obj.insert(QString("resolved"), ::dc_rest::toJsonValue(m_resolved));
    }
    if (m_stickers.size() > 0) {
        obj.insert(QString("stickers"), ::dc_rest::toJsonValue(m_stickers));
    }
    if (m_sticker_items.size() > 0) {
        obj.insert(QString("sticker_items"), ::dc_rest::toJsonValue(m_sticker_items));
    }
    if (m_call.isSet()) {
        obj.insert(QString("call"), ::dc_rest::toJsonValue(m_call));
    }
    if (m_activity_isSet) {
        obj.insert(QString("activity"), ::dc_rest::toJsonValue(m_activity));
    }
    if (m_application.isSet()) {
        obj.insert(QString("application"), ::dc_rest::toJsonValue(m_application));
    }
    if (m_application_id_isSet) {
        obj.insert(QString("application_id"), ::dc_rest::toJsonValue(m_application_id));
    }
    if (m_interaction.isSet()) {
        obj.insert(QString("interaction"), ::dc_rest::toJsonValue(m_interaction));
    }
    if (m_nonce.isSet()) {
        obj.insert(QString("nonce"), ::dc_rest::toJsonValue(m_nonce));
    }
    if (m_webhook_id_isSet) {
        obj.insert(QString("webhook_id"), ::dc_rest::toJsonValue(m_webhook_id));
    }
    if (m_message_reference.isSet()) {
        obj.insert(QString("message_reference"), ::dc_rest::toJsonValue(m_message_reference));
    }
    if (m_thread.isSet()) {
        obj.insert(QString("thread"), ::dc_rest::toJsonValue(m_thread));
    }
    if (m_mention_channels.size() > 0) {
        obj.insert(QString("mention_channels"), ::dc_rest::toJsonValue(m_mention_channels));
    }
    if (m_role_subscription_data.isSet()) {
        obj.insert(QString("role_subscription_data"), ::dc_rest::toJsonValue(m_role_subscription_data));
    }
    if (m_purchase_notification.isSet()) {
        obj.insert(QString("purchase_notification"), ::dc_rest::toJsonValue(m_purchase_notification));
    }
    if (m_position_isSet) {
        obj.insert(QString("position"), ::dc_rest::toJsonValue(m_position));
    }
    if (m_poll.isSet()) {
        obj.insert(QString("poll"), ::dc_rest::toJsonValue(m_poll));
    }
    if (m_interaction_metadata.isSet()) {
        obj.insert(QString("interaction_metadata"), ::dc_rest::toJsonValue(m_interaction_metadata));
    }
    if (m_message_snapshots.size() > 0) {
        obj.insert(QString("message_snapshots"), ::dc_rest::toJsonValue(m_message_snapshots));
    }
    if (m_reactions.size() > 0) {
        obj.insert(QString("reactions"), ::dc_rest::toJsonValue(m_reactions));
    }
    if (m_referenced_message.isSet()) {
        obj.insert(QString("referenced_message"), ::dc_rest::toJsonValue(m_referenced_message));
    }
    return obj;
}

qint32 OAIMessageResponse::getType() const {
    return m_type;
}
void OAIMessageResponse::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIMessageResponse::is_type_Set() const{
    return m_type_isSet;
}

bool OAIMessageResponse::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIMessageResponse::getContent() const {
    return m_content;
}
void OAIMessageResponse::setContent(const QString &content) {
    m_content = content;
    m_content_isSet = true;
}

bool OAIMessageResponse::is_content_Set() const{
    return m_content_isSet;
}

bool OAIMessageResponse::is_content_Valid() const{
    return m_content_isValid;
}

QList<OAIUserResponse> OAIMessageResponse::getMentions() const {
    return m_mentions;
}
void OAIMessageResponse::setMentions(const QList<OAIUserResponse> &mentions) {
    m_mentions = mentions;
    m_mentions_isSet = true;
}

bool OAIMessageResponse::is_mentions_Set() const{
    return m_mentions_isSet;
}

bool OAIMessageResponse::is_mentions_Valid() const{
    return m_mentions_isValid;
}

QSet<QString> OAIMessageResponse::getMentionRoles() const {
    return m_mention_roles;
}
void OAIMessageResponse::setMentionRoles(const QSet<QString> &mention_roles) {
    m_mention_roles = mention_roles;
    m_mention_roles_isSet = true;
}

bool OAIMessageResponse::is_mention_roles_Set() const{
    return m_mention_roles_isSet;
}

bool OAIMessageResponse::is_mention_roles_Valid() const{
    return m_mention_roles_isValid;
}

QList<OAIMessageAttachmentResponse> OAIMessageResponse::getAttachments() const {
    return m_attachments;
}
void OAIMessageResponse::setAttachments(const QList<OAIMessageAttachmentResponse> &attachments) {
    m_attachments = attachments;
    m_attachments_isSet = true;
}

bool OAIMessageResponse::is_attachments_Set() const{
    return m_attachments_isSet;
}

bool OAIMessageResponse::is_attachments_Valid() const{
    return m_attachments_isValid;
}

QList<OAIMessageEmbedResponse> OAIMessageResponse::getEmbeds() const {
    return m_embeds;
}
void OAIMessageResponse::setEmbeds(const QList<OAIMessageEmbedResponse> &embeds) {
    m_embeds = embeds;
    m_embeds_isSet = true;
}

bool OAIMessageResponse::is_embeds_Set() const{
    return m_embeds_isSet;
}

bool OAIMessageResponse::is_embeds_Valid() const{
    return m_embeds_isValid;
}

QDateTime OAIMessageResponse::getTimestamp() const {
    return m_timestamp;
}
void OAIMessageResponse::setTimestamp(const QDateTime &timestamp) {
    m_timestamp = timestamp;
    m_timestamp_isSet = true;
}

bool OAIMessageResponse::is_timestamp_Set() const{
    return m_timestamp_isSet;
}

bool OAIMessageResponse::is_timestamp_Valid() const{
    return m_timestamp_isValid;
}

qint32 OAIMessageResponse::getFlags() const {
    return m_flags;
}
void OAIMessageResponse::setFlags(const qint32 &flags) {
    m_flags = flags;
    m_flags_isSet = true;
}

bool OAIMessageResponse::is_flags_Set() const{
    return m_flags_isSet;
}

bool OAIMessageResponse::is_flags_Valid() const{
    return m_flags_isValid;
}

QList<OAIBasicMessageResponse_components_inner> OAIMessageResponse::getComponents() const {
    return m_components;
}
void OAIMessageResponse::setComponents(const QList<OAIBasicMessageResponse_components_inner> &components) {
    m_components = components;
    m_components_isSet = true;
}

bool OAIMessageResponse::is_components_Set() const{
    return m_components_isSet;
}

bool OAIMessageResponse::is_components_Valid() const{
    return m_components_isValid;
}

QString OAIMessageResponse::getId() const {
    return m_id;
}
void OAIMessageResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIMessageResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIMessageResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIMessageResponse::getChannelId() const {
    return m_channel_id;
}
void OAIMessageResponse::setChannelId(const QString &channel_id) {
    m_channel_id = channel_id;
    m_channel_id_isSet = true;
}

bool OAIMessageResponse::is_channel_id_Set() const{
    return m_channel_id_isSet;
}

bool OAIMessageResponse::is_channel_id_Valid() const{
    return m_channel_id_isValid;
}

OAIUserResponse OAIMessageResponse::getAuthor() const {
    return m_author;
}
void OAIMessageResponse::setAuthor(const OAIUserResponse &author) {
    m_author = author;
    m_author_isSet = true;
}

bool OAIMessageResponse::is_author_Set() const{
    return m_author_isSet;
}

bool OAIMessageResponse::is_author_Valid() const{
    return m_author_isValid;
}

bool OAIMessageResponse::isPinned() const {
    return m_pinned;
}
void OAIMessageResponse::setPinned(const bool &pinned) {
    m_pinned = pinned;
    m_pinned_isSet = true;
}

bool OAIMessageResponse::is_pinned_Set() const{
    return m_pinned_isSet;
}

bool OAIMessageResponse::is_pinned_Valid() const{
    return m_pinned_isValid;
}

bool OAIMessageResponse::isMentionEveryone() const {
    return m_mention_everyone;
}
void OAIMessageResponse::setMentionEveryone(const bool &mention_everyone) {
    m_mention_everyone = mention_everyone;
    m_mention_everyone_isSet = true;
}

bool OAIMessageResponse::is_mention_everyone_Set() const{
    return m_mention_everyone_isSet;
}

bool OAIMessageResponse::is_mention_everyone_Valid() const{
    return m_mention_everyone_isValid;
}

bool OAIMessageResponse::isTts() const {
    return m_tts;
}
void OAIMessageResponse::setTts(const bool &tts) {
    m_tts = tts;
    m_tts_isSet = true;
}

bool OAIMessageResponse::is_tts_Set() const{
    return m_tts_isSet;
}

bool OAIMessageResponse::is_tts_Valid() const{
    return m_tts_isValid;
}

QDateTime OAIMessageResponse::getEditedTimestamp() const {
    return m_edited_timestamp;
}
void OAIMessageResponse::setEditedTimestamp(const QDateTime &edited_timestamp) {
    m_edited_timestamp = edited_timestamp;
    m_edited_timestamp_isSet = true;
}

bool OAIMessageResponse::is_edited_timestamp_Set() const{
    return m_edited_timestamp_isSet;
}

bool OAIMessageResponse::is_edited_timestamp_Valid() const{
    return m_edited_timestamp_isValid;
}

OAIResolvedObjectsResponse OAIMessageResponse::getResolved() const {
    return m_resolved;
}
void OAIMessageResponse::setResolved(const OAIResolvedObjectsResponse &resolved) {
    m_resolved = resolved;
    m_resolved_isSet = true;
}

bool OAIMessageResponse::is_resolved_Set() const{
    return m_resolved_isSet;
}

bool OAIMessageResponse::is_resolved_Valid() const{
    return m_resolved_isValid;
}

QList<OAIGet_sticker_200_response> OAIMessageResponse::getStickers() const {
    return m_stickers;
}
void OAIMessageResponse::setStickers(const QList<OAIGet_sticker_200_response> &stickers) {
    m_stickers = stickers;
    m_stickers_isSet = true;
}

bool OAIMessageResponse::is_stickers_Set() const{
    return m_stickers_isSet;
}

bool OAIMessageResponse::is_stickers_Valid() const{
    return m_stickers_isValid;
}

QList<OAIMessageStickerItemResponse> OAIMessageResponse::getStickerItems() const {
    return m_sticker_items;
}
void OAIMessageResponse::setStickerItems(const QList<OAIMessageStickerItemResponse> &sticker_items) {
    m_sticker_items = sticker_items;
    m_sticker_items_isSet = true;
}

bool OAIMessageResponse::is_sticker_items_Set() const{
    return m_sticker_items_isSet;
}

bool OAIMessageResponse::is_sticker_items_Valid() const{
    return m_sticker_items_isValid;
}

OAIMessageCallResponse OAIMessageResponse::getCall() const {
    return m_call;
}
void OAIMessageResponse::setCall(const OAIMessageCallResponse &call) {
    m_call = call;
    m_call_isSet = true;
}

bool OAIMessageResponse::is_call_Set() const{
    return m_call_isSet;
}

bool OAIMessageResponse::is_call_Valid() const{
    return m_call_isValid;
}

OAIObject OAIMessageResponse::getActivity() const {
    return m_activity;
}
void OAIMessageResponse::setActivity(const OAIObject &activity) {
    m_activity = activity;
    m_activity_isSet = true;
}

bool OAIMessageResponse::is_activity_Set() const{
    return m_activity_isSet;
}

bool OAIMessageResponse::is_activity_Valid() const{
    return m_activity_isValid;
}

OAIBasicApplicationResponse OAIMessageResponse::getApplication() const {
    return m_application;
}
void OAIMessageResponse::setApplication(const OAIBasicApplicationResponse &application) {
    m_application = application;
    m_application_isSet = true;
}

bool OAIMessageResponse::is_application_Set() const{
    return m_application_isSet;
}

bool OAIMessageResponse::is_application_Valid() const{
    return m_application_isValid;
}

QString OAIMessageResponse::getApplicationId() const {
    return m_application_id;
}
void OAIMessageResponse::setApplicationId(const QString &application_id) {
    m_application_id = application_id;
    m_application_id_isSet = true;
}

bool OAIMessageResponse::is_application_id_Set() const{
    return m_application_id_isSet;
}

bool OAIMessageResponse::is_application_id_Valid() const{
    return m_application_id_isValid;
}

OAIMessageInteractionResponse OAIMessageResponse::getInteraction() const {
    return m_interaction;
}
void OAIMessageResponse::setInteraction(const OAIMessageInteractionResponse &interaction) {
    m_interaction = interaction;
    m_interaction_isSet = true;
}

bool OAIMessageResponse::is_interaction_Set() const{
    return m_interaction_isSet;
}

bool OAIMessageResponse::is_interaction_Valid() const{
    return m_interaction_isValid;
}

OAIBasicMessageResponse_nonce OAIMessageResponse::getNonce() const {
    return m_nonce;
}
void OAIMessageResponse::setNonce(const OAIBasicMessageResponse_nonce &nonce) {
    m_nonce = nonce;
    m_nonce_isSet = true;
}

bool OAIMessageResponse::is_nonce_Set() const{
    return m_nonce_isSet;
}

bool OAIMessageResponse::is_nonce_Valid() const{
    return m_nonce_isValid;
}

QString OAIMessageResponse::getWebhookId() const {
    return m_webhook_id;
}
void OAIMessageResponse::setWebhookId(const QString &webhook_id) {
    m_webhook_id = webhook_id;
    m_webhook_id_isSet = true;
}

bool OAIMessageResponse::is_webhook_id_Set() const{
    return m_webhook_id_isSet;
}

bool OAIMessageResponse::is_webhook_id_Valid() const{
    return m_webhook_id_isValid;
}

OAIMessageReferenceResponse OAIMessageResponse::getMessageReference() const {
    return m_message_reference;
}
void OAIMessageResponse::setMessageReference(const OAIMessageReferenceResponse &message_reference) {
    m_message_reference = message_reference;
    m_message_reference_isSet = true;
}

bool OAIMessageResponse::is_message_reference_Set() const{
    return m_message_reference_isSet;
}

bool OAIMessageResponse::is_message_reference_Valid() const{
    return m_message_reference_isValid;
}

OAIThreadResponse OAIMessageResponse::getThread() const {
    return m_thread;
}
void OAIMessageResponse::setThread(const OAIThreadResponse &thread) {
    m_thread = thread;
    m_thread_isSet = true;
}

bool OAIMessageResponse::is_thread_Set() const{
    return m_thread_isSet;
}

bool OAIMessageResponse::is_thread_Valid() const{
    return m_thread_isValid;
}

QList<OAIMessageMentionChannelResponse> OAIMessageResponse::getMentionChannels() const {
    return m_mention_channels;
}
void OAIMessageResponse::setMentionChannels(const QList<OAIMessageMentionChannelResponse> &mention_channels) {
    m_mention_channels = mention_channels;
    m_mention_channels_isSet = true;
}

bool OAIMessageResponse::is_mention_channels_Set() const{
    return m_mention_channels_isSet;
}

bool OAIMessageResponse::is_mention_channels_Valid() const{
    return m_mention_channels_isValid;
}

OAIMessageRoleSubscriptionDataResponse OAIMessageResponse::getRoleSubscriptionData() const {
    return m_role_subscription_data;
}
void OAIMessageResponse::setRoleSubscriptionData(const OAIMessageRoleSubscriptionDataResponse &role_subscription_data) {
    m_role_subscription_data = role_subscription_data;
    m_role_subscription_data_isSet = true;
}

bool OAIMessageResponse::is_role_subscription_data_Set() const{
    return m_role_subscription_data_isSet;
}

bool OAIMessageResponse::is_role_subscription_data_Valid() const{
    return m_role_subscription_data_isValid;
}

OAIPurchaseNotificationResponse OAIMessageResponse::getPurchaseNotification() const {
    return m_purchase_notification;
}
void OAIMessageResponse::setPurchaseNotification(const OAIPurchaseNotificationResponse &purchase_notification) {
    m_purchase_notification = purchase_notification;
    m_purchase_notification_isSet = true;
}

bool OAIMessageResponse::is_purchase_notification_Set() const{
    return m_purchase_notification_isSet;
}

bool OAIMessageResponse::is_purchase_notification_Valid() const{
    return m_purchase_notification_isValid;
}

qint32 OAIMessageResponse::getPosition() const {
    return m_position;
}
void OAIMessageResponse::setPosition(const qint32 &position) {
    m_position = position;
    m_position_isSet = true;
}

bool OAIMessageResponse::is_position_Set() const{
    return m_position_isSet;
}

bool OAIMessageResponse::is_position_Valid() const{
    return m_position_isValid;
}

OAIPollResponse OAIMessageResponse::getPoll() const {
    return m_poll;
}
void OAIMessageResponse::setPoll(const OAIPollResponse &poll) {
    m_poll = poll;
    m_poll_isSet = true;
}

bool OAIMessageResponse::is_poll_Set() const{
    return m_poll_isSet;
}

bool OAIMessageResponse::is_poll_Valid() const{
    return m_poll_isValid;
}

OAIBasicMessageResponse_interaction_metadata OAIMessageResponse::getInteractionMetadata() const {
    return m_interaction_metadata;
}
void OAIMessageResponse::setInteractionMetadata(const OAIBasicMessageResponse_interaction_metadata &interaction_metadata) {
    m_interaction_metadata = interaction_metadata;
    m_interaction_metadata_isSet = true;
}

bool OAIMessageResponse::is_interaction_metadata_Set() const{
    return m_interaction_metadata_isSet;
}

bool OAIMessageResponse::is_interaction_metadata_Valid() const{
    return m_interaction_metadata_isValid;
}

QList<OAIMessageSnapshotResponse> OAIMessageResponse::getMessageSnapshots() const {
    return m_message_snapshots;
}
void OAIMessageResponse::setMessageSnapshots(const QList<OAIMessageSnapshotResponse> &message_snapshots) {
    m_message_snapshots = message_snapshots;
    m_message_snapshots_isSet = true;
}

bool OAIMessageResponse::is_message_snapshots_Set() const{
    return m_message_snapshots_isSet;
}

bool OAIMessageResponse::is_message_snapshots_Valid() const{
    return m_message_snapshots_isValid;
}

QList<OAIMessageReactionResponse> OAIMessageResponse::getReactions() const {
    return m_reactions;
}
void OAIMessageResponse::setReactions(const QList<OAIMessageReactionResponse> &reactions) {
    m_reactions = reactions;
    m_reactions_isSet = true;
}

bool OAIMessageResponse::is_reactions_Set() const{
    return m_reactions_isSet;
}

bool OAIMessageResponse::is_reactions_Valid() const{
    return m_reactions_isValid;
}

OAIBasicMessageResponse OAIMessageResponse::getReferencedMessage() const {
    return m_referenced_message;
}
void OAIMessageResponse::setReferencedMessage(const OAIBasicMessageResponse &referenced_message) {
    m_referenced_message = referenced_message;
    m_referenced_message_isSet = true;
}

bool OAIMessageResponse::is_referenced_message_Set() const{
    return m_referenced_message_isSet;
}

bool OAIMessageResponse::is_referenced_message_Valid() const{
    return m_referenced_message_isValid;
}

bool OAIMessageResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_content_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_mentions.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_mention_roles.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_attachments.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_embeds.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_timestamp_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_flags_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_components.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_channel_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_author.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_pinned_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_mention_everyone_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_tts_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_edited_timestamp_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_resolved.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_stickers.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_sticker_items.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_call.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_activity_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_application.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_application_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_interaction.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_nonce.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_webhook_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_reference.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_thread.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_mention_channels.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_role_subscription_data.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_purchase_notification.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_position_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_poll.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_interaction_metadata.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_snapshots.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_reactions.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_referenced_message.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMessageResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_content_isValid && m_mentions_isValid && m_mention_roles_isValid && m_attachments_isValid && m_embeds_isValid && m_timestamp_isValid && m_flags_isValid && m_components_isValid && m_id_isValid && m_channel_id_isValid && m_author_isValid && m_pinned_isValid && m_mention_everyone_isValid && m_tts_isValid && true;
}

} // namespace dc_rest
