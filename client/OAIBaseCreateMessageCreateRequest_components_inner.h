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
 * OAIBaseCreateMessageCreateRequest_components_inner.h
 *
 * 
 */

#ifndef OAIBaseCreateMessageCreateRequest_components_inner_H
#define OAIBaseCreateMessageCreateRequest_components_inner_H

#include <QJsonObject>

#include "OAIActionRowComponentForMessageRequest.h"
#include "OAIContainerComponentForMessageRequest.h"
#include "OAIFileComponentForMessageRequest.h"
#include "OAIMediaGalleryComponentForMessageRequest.h"
#include "OAIMediaGalleryItemRequest.h"
#include "OAISectionComponentForMessageRequest.h"
#include "OAISectionComponentForMessageRequest_accessory.h"
#include "OAISeparatorComponentForMessageRequest.h"
#include "OAITextDisplayComponentForMessageRequest.h"
#include "OAIUnfurledMediaRequestWithAttachmentReferenceRequired.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAITextDisplayComponentForMessageRequest;
class OAIUnfurledMediaRequestWithAttachmentReferenceRequired;
class OAIMediaGalleryItemRequest;
class OAISectionComponentForMessageRequest_accessory;

class OAIBaseCreateMessageCreateRequest_components_inner : public OAIObject {
public:
    OAIBaseCreateMessageCreateRequest_components_inner();
    OAIBaseCreateMessageCreateRequest_components_inner(QString json);
    ~OAIBaseCreateMessageCreateRequest_components_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getType() const;
    void setType(const qint32 &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    QList<OAITextDisplayComponentForMessageRequest> getComponents() const;
    void setComponents(const QList<OAITextDisplayComponentForMessageRequest> &components);
    bool is_components_Set() const;
    bool is_components_Valid() const;

    OAIUnfurledMediaRequestWithAttachmentReferenceRequired getFile() const;
    void setFile(const OAIUnfurledMediaRequestWithAttachmentReferenceRequired &file);
    bool is_file_Set() const;
    bool is_file_Valid() const;

    QList<OAIMediaGalleryItemRequest> getItems() const;
    void setItems(const QList<OAIMediaGalleryItemRequest> &items);
    bool is_items_Set() const;
    bool is_items_Valid() const;

    OAISectionComponentForMessageRequest_accessory getAccessory() const;
    void setAccessory(const OAISectionComponentForMessageRequest_accessory &accessory);
    bool is_accessory_Set() const;
    bool is_accessory_Valid() const;

    QString getContent() const;
    void setContent(const QString &content);
    bool is_content_Set() const;
    bool is_content_Valid() const;

    qint32 getAccentColor() const;
    void setAccentColor(const qint32 &accent_color);
    bool is_accent_color_Set() const;
    bool is_accent_color_Valid() const;

    bool isSpoiler() const;
    void setSpoiler(const bool &spoiler);
    bool is_spoiler_Set() const;
    bool is_spoiler_Valid() const;

    qint32 getSpacing() const;
    void setSpacing(const qint32 &spacing);
    bool is_spacing_Set() const;
    bool is_spacing_Valid() const;

    bool isDivider() const;
    void setDivider(const bool &divider);
    bool is_divider_Set() const;
    bool is_divider_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    QList<OAITextDisplayComponentForMessageRequest> m_components;
    bool m_components_isSet;
    bool m_components_isValid;

    OAIUnfurledMediaRequestWithAttachmentReferenceRequired m_file;
    bool m_file_isSet;
    bool m_file_isValid;

    QList<OAIMediaGalleryItemRequest> m_items;
    bool m_items_isSet;
    bool m_items_isValid;

    OAISectionComponentForMessageRequest_accessory m_accessory;
    bool m_accessory_isSet;
    bool m_accessory_isValid;

    QString m_content;
    bool m_content_isSet;
    bool m_content_isValid;

    qint32 m_accent_color;
    bool m_accent_color_isSet;
    bool m_accent_color_isValid;

    bool m_spoiler;
    bool m_spoiler_isSet;
    bool m_spoiler_isValid;

    qint32 m_spacing;
    bool m_spacing_isSet;
    bool m_spacing_isValid;

    bool m_divider;
    bool m_divider_isSet;
    bool m_divider_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIBaseCreateMessageCreateRequest_components_inner)

#endif // OAIBaseCreateMessageCreateRequest_components_inner_H
