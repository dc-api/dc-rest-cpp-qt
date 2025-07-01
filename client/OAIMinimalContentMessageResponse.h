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
 * OAIMinimalContentMessageResponse.h
 *
 * 
 */

#ifndef OAIMinimalContentMessageResponse_H
#define OAIMinimalContentMessageResponse_H

#include <QJsonObject>

#include "OAIBasicMessageResponse_components_inner.h"
#include "OAIGet_sticker_200_response.h"
#include "OAIMessageAttachmentResponse.h"
#include "OAIMessageEmbedResponse.h"
#include "OAIMessageStickerItemResponse.h"
#include "OAIResolvedObjectsResponse.h"
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

class OAIMinimalContentMessageResponse : public OAIObject {
public:
    OAIMinimalContentMessageResponse();
    OAIMinimalContentMessageResponse(QString json);
    ~OAIMinimalContentMessageResponse() override;

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
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIMinimalContentMessageResponse)

#endif // OAIMinimalContentMessageResponse_H
