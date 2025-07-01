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

#include "OAIContainerComponentForMessageRequest_components_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIContainerComponentForMessageRequest_components_inner::OAIContainerComponentForMessageRequest_components_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIContainerComponentForMessageRequest_components_inner::OAIContainerComponentForMessageRequest_components_inner() {
    this->initializeModel();
}

OAIContainerComponentForMessageRequest_components_inner::~OAIContainerComponentForMessageRequest_components_inner() {}

void OAIContainerComponentForMessageRequest_components_inner::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_components_isSet = false;
    m_components_isValid = false;

    m_file_isSet = false;
    m_file_isValid = false;

    m_items_isSet = false;
    m_items_isValid = false;

    m_accessory_isSet = false;
    m_accessory_isValid = false;

    m_content_isSet = false;
    m_content_isValid = false;

    m_spoiler_isSet = false;
    m_spoiler_isValid = false;

    m_spacing_isSet = false;
    m_spacing_isValid = false;

    m_divider_isSet = false;
    m_divider_isValid = false;
}

void OAIContainerComponentForMessageRequest_components_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIContainerComponentForMessageRequest_components_inner::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_components_isValid = ::dc_rest::fromJsonValue(m_components, json[QString("components")]);
    m_components_isSet = !json[QString("components")].isNull() && m_components_isValid;

    m_file_isValid = ::dc_rest::fromJsonValue(m_file, json[QString("file")]);
    m_file_isSet = !json[QString("file")].isNull() && m_file_isValid;

    m_items_isValid = ::dc_rest::fromJsonValue(m_items, json[QString("items")]);
    m_items_isSet = !json[QString("items")].isNull() && m_items_isValid;

    m_accessory_isValid = ::dc_rest::fromJsonValue(m_accessory, json[QString("accessory")]);
    m_accessory_isSet = !json[QString("accessory")].isNull() && m_accessory_isValid;

    m_content_isValid = ::dc_rest::fromJsonValue(m_content, json[QString("content")]);
    m_content_isSet = !json[QString("content")].isNull() && m_content_isValid;

    m_spoiler_isValid = ::dc_rest::fromJsonValue(m_spoiler, json[QString("spoiler")]);
    m_spoiler_isSet = !json[QString("spoiler")].isNull() && m_spoiler_isValid;

    m_spacing_isValid = ::dc_rest::fromJsonValue(m_spacing, json[QString("spacing")]);
    m_spacing_isSet = !json[QString("spacing")].isNull() && m_spacing_isValid;

    m_divider_isValid = ::dc_rest::fromJsonValue(m_divider, json[QString("divider")]);
    m_divider_isSet = !json[QString("divider")].isNull() && m_divider_isValid;
}

QString OAIContainerComponentForMessageRequest_components_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIContainerComponentForMessageRequest_components_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_components.size() > 0) {
        obj.insert(QString("components"), ::dc_rest::toJsonValue(m_components));
    }
    if (m_file.isSet()) {
        obj.insert(QString("file"), ::dc_rest::toJsonValue(m_file));
    }
    if (m_items.size() > 0) {
        obj.insert(QString("items"), ::dc_rest::toJsonValue(m_items));
    }
    if (m_accessory.isSet()) {
        obj.insert(QString("accessory"), ::dc_rest::toJsonValue(m_accessory));
    }
    if (m_content_isSet) {
        obj.insert(QString("content"), ::dc_rest::toJsonValue(m_content));
    }
    if (m_spoiler_isSet) {
        obj.insert(QString("spoiler"), ::dc_rest::toJsonValue(m_spoiler));
    }
    if (m_spacing_isSet) {
        obj.insert(QString("spacing"), ::dc_rest::toJsonValue(m_spacing));
    }
    if (m_divider_isSet) {
        obj.insert(QString("divider"), ::dc_rest::toJsonValue(m_divider));
    }
    return obj;
}

qint32 OAIContainerComponentForMessageRequest_components_inner::getType() const {
    return m_type;
}
void OAIContainerComponentForMessageRequest_components_inner::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIContainerComponentForMessageRequest_components_inner::is_type_Set() const{
    return m_type_isSet;
}

bool OAIContainerComponentForMessageRequest_components_inner::is_type_Valid() const{
    return m_type_isValid;
}

QList<OAITextDisplayComponentForMessageRequest> OAIContainerComponentForMessageRequest_components_inner::getComponents() const {
    return m_components;
}
void OAIContainerComponentForMessageRequest_components_inner::setComponents(const QList<OAITextDisplayComponentForMessageRequest> &components) {
    m_components = components;
    m_components_isSet = true;
}

bool OAIContainerComponentForMessageRequest_components_inner::is_components_Set() const{
    return m_components_isSet;
}

bool OAIContainerComponentForMessageRequest_components_inner::is_components_Valid() const{
    return m_components_isValid;
}

OAIUnfurledMediaRequestWithAttachmentReferenceRequired OAIContainerComponentForMessageRequest_components_inner::getFile() const {
    return m_file;
}
void OAIContainerComponentForMessageRequest_components_inner::setFile(const OAIUnfurledMediaRequestWithAttachmentReferenceRequired &file) {
    m_file = file;
    m_file_isSet = true;
}

bool OAIContainerComponentForMessageRequest_components_inner::is_file_Set() const{
    return m_file_isSet;
}

bool OAIContainerComponentForMessageRequest_components_inner::is_file_Valid() const{
    return m_file_isValid;
}

QList<OAIMediaGalleryItemRequest> OAIContainerComponentForMessageRequest_components_inner::getItems() const {
    return m_items;
}
void OAIContainerComponentForMessageRequest_components_inner::setItems(const QList<OAIMediaGalleryItemRequest> &items) {
    m_items = items;
    m_items_isSet = true;
}

bool OAIContainerComponentForMessageRequest_components_inner::is_items_Set() const{
    return m_items_isSet;
}

bool OAIContainerComponentForMessageRequest_components_inner::is_items_Valid() const{
    return m_items_isValid;
}

OAISectionComponentForMessageRequest_accessory OAIContainerComponentForMessageRequest_components_inner::getAccessory() const {
    return m_accessory;
}
void OAIContainerComponentForMessageRequest_components_inner::setAccessory(const OAISectionComponentForMessageRequest_accessory &accessory) {
    m_accessory = accessory;
    m_accessory_isSet = true;
}

bool OAIContainerComponentForMessageRequest_components_inner::is_accessory_Set() const{
    return m_accessory_isSet;
}

bool OAIContainerComponentForMessageRequest_components_inner::is_accessory_Valid() const{
    return m_accessory_isValid;
}

QString OAIContainerComponentForMessageRequest_components_inner::getContent() const {
    return m_content;
}
void OAIContainerComponentForMessageRequest_components_inner::setContent(const QString &content) {
    m_content = content;
    m_content_isSet = true;
}

bool OAIContainerComponentForMessageRequest_components_inner::is_content_Set() const{
    return m_content_isSet;
}

bool OAIContainerComponentForMessageRequest_components_inner::is_content_Valid() const{
    return m_content_isValid;
}

bool OAIContainerComponentForMessageRequest_components_inner::isSpoiler() const {
    return m_spoiler;
}
void OAIContainerComponentForMessageRequest_components_inner::setSpoiler(const bool &spoiler) {
    m_spoiler = spoiler;
    m_spoiler_isSet = true;
}

bool OAIContainerComponentForMessageRequest_components_inner::is_spoiler_Set() const{
    return m_spoiler_isSet;
}

bool OAIContainerComponentForMessageRequest_components_inner::is_spoiler_Valid() const{
    return m_spoiler_isValid;
}

qint32 OAIContainerComponentForMessageRequest_components_inner::getSpacing() const {
    return m_spacing;
}
void OAIContainerComponentForMessageRequest_components_inner::setSpacing(const qint32 &spacing) {
    m_spacing = spacing;
    m_spacing_isSet = true;
}

bool OAIContainerComponentForMessageRequest_components_inner::is_spacing_Set() const{
    return m_spacing_isSet;
}

bool OAIContainerComponentForMessageRequest_components_inner::is_spacing_Valid() const{
    return m_spacing_isValid;
}

bool OAIContainerComponentForMessageRequest_components_inner::isDivider() const {
    return m_divider;
}
void OAIContainerComponentForMessageRequest_components_inner::setDivider(const bool &divider) {
    m_divider = divider;
    m_divider_isSet = true;
}

bool OAIContainerComponentForMessageRequest_components_inner::is_divider_Set() const{
    return m_divider_isSet;
}

bool OAIContainerComponentForMessageRequest_components_inner::is_divider_Valid() const{
    return m_divider_isValid;
}

bool OAIContainerComponentForMessageRequest_components_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_components.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_file.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_items.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_accessory.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_content_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_spoiler_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_spacing_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_divider_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIContainerComponentForMessageRequest_components_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_components_isValid && m_file_isValid && m_items_isValid && m_accessory_isValid && m_content_isValid && true;
}

} // namespace dc_rest
