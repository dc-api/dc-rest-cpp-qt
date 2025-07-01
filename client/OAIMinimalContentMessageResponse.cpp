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

#include "OAIMinimalContentMessageResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIMinimalContentMessageResponse::OAIMinimalContentMessageResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMinimalContentMessageResponse::OAIMinimalContentMessageResponse() {
    this->initializeModel();
}

OAIMinimalContentMessageResponse::~OAIMinimalContentMessageResponse() {}

void OAIMinimalContentMessageResponse::initializeModel() {

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

    m_edited_timestamp_isSet = false;
    m_edited_timestamp_isValid = false;

    m_resolved_isSet = false;
    m_resolved_isValid = false;

    m_stickers_isSet = false;
    m_stickers_isValid = false;

    m_sticker_items_isSet = false;
    m_sticker_items_isValid = false;
}

void OAIMinimalContentMessageResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMinimalContentMessageResponse::fromJsonObject(QJsonObject json) {

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

    m_edited_timestamp_isValid = ::dc_rest::fromJsonValue(m_edited_timestamp, json[QString("edited_timestamp")]);
    m_edited_timestamp_isSet = !json[QString("edited_timestamp")].isNull() && m_edited_timestamp_isValid;

    m_resolved_isValid = ::dc_rest::fromJsonValue(m_resolved, json[QString("resolved")]);
    m_resolved_isSet = !json[QString("resolved")].isNull() && m_resolved_isValid;

    m_stickers_isValid = ::dc_rest::fromJsonValue(m_stickers, json[QString("stickers")]);
    m_stickers_isSet = !json[QString("stickers")].isNull() && m_stickers_isValid;

    m_sticker_items_isValid = ::dc_rest::fromJsonValue(m_sticker_items, json[QString("sticker_items")]);
    m_sticker_items_isSet = !json[QString("sticker_items")].isNull() && m_sticker_items_isValid;
}

QString OAIMinimalContentMessageResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMinimalContentMessageResponse::asJsonObject() const {
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
    return obj;
}

qint32 OAIMinimalContentMessageResponse::getType() const {
    return m_type;
}
void OAIMinimalContentMessageResponse::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIMinimalContentMessageResponse::is_type_Set() const{
    return m_type_isSet;
}

bool OAIMinimalContentMessageResponse::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIMinimalContentMessageResponse::getContent() const {
    return m_content;
}
void OAIMinimalContentMessageResponse::setContent(const QString &content) {
    m_content = content;
    m_content_isSet = true;
}

bool OAIMinimalContentMessageResponse::is_content_Set() const{
    return m_content_isSet;
}

bool OAIMinimalContentMessageResponse::is_content_Valid() const{
    return m_content_isValid;
}

QList<OAIUserResponse> OAIMinimalContentMessageResponse::getMentions() const {
    return m_mentions;
}
void OAIMinimalContentMessageResponse::setMentions(const QList<OAIUserResponse> &mentions) {
    m_mentions = mentions;
    m_mentions_isSet = true;
}

bool OAIMinimalContentMessageResponse::is_mentions_Set() const{
    return m_mentions_isSet;
}

bool OAIMinimalContentMessageResponse::is_mentions_Valid() const{
    return m_mentions_isValid;
}

QSet<QString> OAIMinimalContentMessageResponse::getMentionRoles() const {
    return m_mention_roles;
}
void OAIMinimalContentMessageResponse::setMentionRoles(const QSet<QString> &mention_roles) {
    m_mention_roles = mention_roles;
    m_mention_roles_isSet = true;
}

bool OAIMinimalContentMessageResponse::is_mention_roles_Set() const{
    return m_mention_roles_isSet;
}

bool OAIMinimalContentMessageResponse::is_mention_roles_Valid() const{
    return m_mention_roles_isValid;
}

QList<OAIMessageAttachmentResponse> OAIMinimalContentMessageResponse::getAttachments() const {
    return m_attachments;
}
void OAIMinimalContentMessageResponse::setAttachments(const QList<OAIMessageAttachmentResponse> &attachments) {
    m_attachments = attachments;
    m_attachments_isSet = true;
}

bool OAIMinimalContentMessageResponse::is_attachments_Set() const{
    return m_attachments_isSet;
}

bool OAIMinimalContentMessageResponse::is_attachments_Valid() const{
    return m_attachments_isValid;
}

QList<OAIMessageEmbedResponse> OAIMinimalContentMessageResponse::getEmbeds() const {
    return m_embeds;
}
void OAIMinimalContentMessageResponse::setEmbeds(const QList<OAIMessageEmbedResponse> &embeds) {
    m_embeds = embeds;
    m_embeds_isSet = true;
}

bool OAIMinimalContentMessageResponse::is_embeds_Set() const{
    return m_embeds_isSet;
}

bool OAIMinimalContentMessageResponse::is_embeds_Valid() const{
    return m_embeds_isValid;
}

QDateTime OAIMinimalContentMessageResponse::getTimestamp() const {
    return m_timestamp;
}
void OAIMinimalContentMessageResponse::setTimestamp(const QDateTime &timestamp) {
    m_timestamp = timestamp;
    m_timestamp_isSet = true;
}

bool OAIMinimalContentMessageResponse::is_timestamp_Set() const{
    return m_timestamp_isSet;
}

bool OAIMinimalContentMessageResponse::is_timestamp_Valid() const{
    return m_timestamp_isValid;
}

qint32 OAIMinimalContentMessageResponse::getFlags() const {
    return m_flags;
}
void OAIMinimalContentMessageResponse::setFlags(const qint32 &flags) {
    m_flags = flags;
    m_flags_isSet = true;
}

bool OAIMinimalContentMessageResponse::is_flags_Set() const{
    return m_flags_isSet;
}

bool OAIMinimalContentMessageResponse::is_flags_Valid() const{
    return m_flags_isValid;
}

QList<OAIBasicMessageResponse_components_inner> OAIMinimalContentMessageResponse::getComponents() const {
    return m_components;
}
void OAIMinimalContentMessageResponse::setComponents(const QList<OAIBasicMessageResponse_components_inner> &components) {
    m_components = components;
    m_components_isSet = true;
}

bool OAIMinimalContentMessageResponse::is_components_Set() const{
    return m_components_isSet;
}

bool OAIMinimalContentMessageResponse::is_components_Valid() const{
    return m_components_isValid;
}

QDateTime OAIMinimalContentMessageResponse::getEditedTimestamp() const {
    return m_edited_timestamp;
}
void OAIMinimalContentMessageResponse::setEditedTimestamp(const QDateTime &edited_timestamp) {
    m_edited_timestamp = edited_timestamp;
    m_edited_timestamp_isSet = true;
}

bool OAIMinimalContentMessageResponse::is_edited_timestamp_Set() const{
    return m_edited_timestamp_isSet;
}

bool OAIMinimalContentMessageResponse::is_edited_timestamp_Valid() const{
    return m_edited_timestamp_isValid;
}

OAIResolvedObjectsResponse OAIMinimalContentMessageResponse::getResolved() const {
    return m_resolved;
}
void OAIMinimalContentMessageResponse::setResolved(const OAIResolvedObjectsResponse &resolved) {
    m_resolved = resolved;
    m_resolved_isSet = true;
}

bool OAIMinimalContentMessageResponse::is_resolved_Set() const{
    return m_resolved_isSet;
}

bool OAIMinimalContentMessageResponse::is_resolved_Valid() const{
    return m_resolved_isValid;
}

QList<OAIGet_sticker_200_response> OAIMinimalContentMessageResponse::getStickers() const {
    return m_stickers;
}
void OAIMinimalContentMessageResponse::setStickers(const QList<OAIGet_sticker_200_response> &stickers) {
    m_stickers = stickers;
    m_stickers_isSet = true;
}

bool OAIMinimalContentMessageResponse::is_stickers_Set() const{
    return m_stickers_isSet;
}

bool OAIMinimalContentMessageResponse::is_stickers_Valid() const{
    return m_stickers_isValid;
}

QList<OAIMessageStickerItemResponse> OAIMinimalContentMessageResponse::getStickerItems() const {
    return m_sticker_items;
}
void OAIMinimalContentMessageResponse::setStickerItems(const QList<OAIMessageStickerItemResponse> &sticker_items) {
    m_sticker_items = sticker_items;
    m_sticker_items_isSet = true;
}

bool OAIMinimalContentMessageResponse::is_sticker_items_Set() const{
    return m_sticker_items_isSet;
}

bool OAIMinimalContentMessageResponse::is_sticker_items_Valid() const{
    return m_sticker_items_isValid;
}

bool OAIMinimalContentMessageResponse::isSet() const {
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
    } while (false);
    return isObjectUpdated;
}

bool OAIMinimalContentMessageResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_content_isValid && m_mentions_isValid && m_mention_roles_isValid && m_attachments_isValid && m_embeds_isValid && m_timestamp_isValid && m_flags_isValid && m_components_isValid && true;
}

} // namespace dc_rest
