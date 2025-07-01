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
 * OAIContainerComponentResponse_components_inner.h
 *
 * 
 */

#ifndef OAIContainerComponentResponse_components_inner_H
#define OAIContainerComponentResponse_components_inner_H

#include <QJsonObject>

#include "OAIActionRowComponentResponse.h"
#include "OAIFileComponentResponse.h"
#include "OAIMediaGalleryComponentResponse.h"
#include "OAIMediaGalleryItemResponse.h"
#include "OAISectionComponentResponse.h"
#include "OAISectionComponentResponse_accessory.h"
#include "OAISeparatorComponentResponse.h"
#include "OAITextDisplayComponentResponse.h"
#include "OAIUnfurledMediaResponse.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAITextDisplayComponentResponse;
class OAIUnfurledMediaResponse;
class OAIMediaGalleryItemResponse;
class OAISectionComponentResponse_accessory;

class OAIContainerComponentResponse_components_inner : public OAIObject {
public:
    OAIContainerComponentResponse_components_inner();
    OAIContainerComponentResponse_components_inner(QString json);
    ~OAIContainerComponentResponse_components_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getType() const;
    void setType(const qint32 &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    qint32 getId() const;
    void setId(const qint32 &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QList<OAITextDisplayComponentResponse> getComponents() const;
    void setComponents(const QList<OAITextDisplayComponentResponse> &components);
    bool is_components_Set() const;
    bool is_components_Valid() const;

    OAIUnfurledMediaResponse getFile() const;
    void setFile(const OAIUnfurledMediaResponse &file);
    bool is_file_Set() const;
    bool is_file_Valid() const;

    bool isSpoiler() const;
    void setSpoiler(const bool &spoiler);
    bool is_spoiler_Set() const;
    bool is_spoiler_Valid() const;

    QList<OAIMediaGalleryItemResponse> getItems() const;
    void setItems(const QList<OAIMediaGalleryItemResponse> &items);
    bool is_items_Set() const;
    bool is_items_Valid() const;

    OAISectionComponentResponse_accessory getAccessory() const;
    void setAccessory(const OAISectionComponentResponse_accessory &accessory);
    bool is_accessory_Set() const;
    bool is_accessory_Valid() const;

    qint32 getSpacing() const;
    void setSpacing(const qint32 &spacing);
    bool is_spacing_Set() const;
    bool is_spacing_Valid() const;

    bool isDivider() const;
    void setDivider(const bool &divider);
    bool is_divider_Set() const;
    bool is_divider_Valid() const;

    QString getContent() const;
    void setContent(const QString &content);
    bool is_content_Set() const;
    bool is_content_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    qint32 getSize() const;
    void setSize(const qint32 &size);
    bool is_size_Set() const;
    bool is_size_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    qint32 m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QList<OAITextDisplayComponentResponse> m_components;
    bool m_components_isSet;
    bool m_components_isValid;

    OAIUnfurledMediaResponse m_file;
    bool m_file_isSet;
    bool m_file_isValid;

    bool m_spoiler;
    bool m_spoiler_isSet;
    bool m_spoiler_isValid;

    QList<OAIMediaGalleryItemResponse> m_items;
    bool m_items_isSet;
    bool m_items_isValid;

    OAISectionComponentResponse_accessory m_accessory;
    bool m_accessory_isSet;
    bool m_accessory_isValid;

    qint32 m_spacing;
    bool m_spacing_isSet;
    bool m_spacing_isValid;

    bool m_divider;
    bool m_divider_isSet;
    bool m_divider_isValid;

    QString m_content;
    bool m_content_isSet;
    bool m_content_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    qint32 m_size;
    bool m_size_isSet;
    bool m_size_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIContainerComponentResponse_components_inner)

#endif // OAIContainerComponentResponse_components_inner_H
