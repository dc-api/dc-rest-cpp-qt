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

#include "OAISectionComponentForMessageRequest_accessory.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAISectionComponentForMessageRequest_accessory::OAISectionComponentForMessageRequest_accessory(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISectionComponentForMessageRequest_accessory::OAISectionComponentForMessageRequest_accessory() {
    this->initializeModel();
}

OAISectionComponentForMessageRequest_accessory::~OAISectionComponentForMessageRequest_accessory() {}

void OAISectionComponentForMessageRequest_accessory::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_style_isSet = false;
    m_style_isValid = false;

    m_media_isSet = false;
    m_media_isValid = false;

    m_custom_id_isSet = false;
    m_custom_id_isValid = false;

    m_label_isSet = false;
    m_label_isValid = false;

    m_disabled_isSet = false;
    m_disabled_isValid = false;

    m_url_isSet = false;
    m_url_isValid = false;

    m_sku_id_isSet = false;
    m_sku_id_isValid = false;

    m_emoji_isSet = false;
    m_emoji_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_spoiler_isSet = false;
    m_spoiler_isValid = false;
}

void OAISectionComponentForMessageRequest_accessory::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISectionComponentForMessageRequest_accessory::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_style_isValid = ::dc_rest::fromJsonValue(m_style, json[QString("style")]);
    m_style_isSet = !json[QString("style")].isNull() && m_style_isValid;

    m_media_isValid = ::dc_rest::fromJsonValue(m_media, json[QString("media")]);
    m_media_isSet = !json[QString("media")].isNull() && m_media_isValid;

    m_custom_id_isValid = ::dc_rest::fromJsonValue(m_custom_id, json[QString("custom_id")]);
    m_custom_id_isSet = !json[QString("custom_id")].isNull() && m_custom_id_isValid;

    m_label_isValid = ::dc_rest::fromJsonValue(m_label, json[QString("label")]);
    m_label_isSet = !json[QString("label")].isNull() && m_label_isValid;

    m_disabled_isValid = ::dc_rest::fromJsonValue(m_disabled, json[QString("disabled")]);
    m_disabled_isSet = !json[QString("disabled")].isNull() && m_disabled_isValid;

    m_url_isValid = ::dc_rest::fromJsonValue(m_url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;

    m_sku_id_isValid = ::dc_rest::fromJsonValue(m_sku_id, json[QString("sku_id")]);
    m_sku_id_isSet = !json[QString("sku_id")].isNull() && m_sku_id_isValid;

    m_emoji_isValid = ::dc_rest::fromJsonValue(m_emoji, json[QString("emoji")]);
    m_emoji_isSet = !json[QString("emoji")].isNull() && m_emoji_isValid;

    m_description_isValid = ::dc_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_spoiler_isValid = ::dc_rest::fromJsonValue(m_spoiler, json[QString("spoiler")]);
    m_spoiler_isSet = !json[QString("spoiler")].isNull() && m_spoiler_isValid;
}

QString OAISectionComponentForMessageRequest_accessory::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISectionComponentForMessageRequest_accessory::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_style_isSet) {
        obj.insert(QString("style"), ::dc_rest::toJsonValue(m_style));
    }
    if (m_media.isSet()) {
        obj.insert(QString("media"), ::dc_rest::toJsonValue(m_media));
    }
    if (m_custom_id_isSet) {
        obj.insert(QString("custom_id"), ::dc_rest::toJsonValue(m_custom_id));
    }
    if (m_label_isSet) {
        obj.insert(QString("label"), ::dc_rest::toJsonValue(m_label));
    }
    if (m_disabled_isSet) {
        obj.insert(QString("disabled"), ::dc_rest::toJsonValue(m_disabled));
    }
    if (m_url_isSet) {
        obj.insert(QString("url"), ::dc_rest::toJsonValue(m_url));
    }
    if (m_sku_id_isSet) {
        obj.insert(QString("sku_id"), ::dc_rest::toJsonValue(m_sku_id));
    }
    if (m_emoji.isSet()) {
        obj.insert(QString("emoji"), ::dc_rest::toJsonValue(m_emoji));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::dc_rest::toJsonValue(m_description));
    }
    if (m_spoiler_isSet) {
        obj.insert(QString("spoiler"), ::dc_rest::toJsonValue(m_spoiler));
    }
    return obj;
}

qint32 OAISectionComponentForMessageRequest_accessory::getType() const {
    return m_type;
}
void OAISectionComponentForMessageRequest_accessory::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAISectionComponentForMessageRequest_accessory::is_type_Set() const{
    return m_type_isSet;
}

bool OAISectionComponentForMessageRequest_accessory::is_type_Valid() const{
    return m_type_isValid;
}

qint32 OAISectionComponentForMessageRequest_accessory::getStyle() const {
    return m_style;
}
void OAISectionComponentForMessageRequest_accessory::setStyle(const qint32 &style) {
    m_style = style;
    m_style_isSet = true;
}

bool OAISectionComponentForMessageRequest_accessory::is_style_Set() const{
    return m_style_isSet;
}

bool OAISectionComponentForMessageRequest_accessory::is_style_Valid() const{
    return m_style_isValid;
}

OAIUnfurledMediaRequest OAISectionComponentForMessageRequest_accessory::getMedia() const {
    return m_media;
}
void OAISectionComponentForMessageRequest_accessory::setMedia(const OAIUnfurledMediaRequest &media) {
    m_media = media;
    m_media_isSet = true;
}

bool OAISectionComponentForMessageRequest_accessory::is_media_Set() const{
    return m_media_isSet;
}

bool OAISectionComponentForMessageRequest_accessory::is_media_Valid() const{
    return m_media_isValid;
}

QString OAISectionComponentForMessageRequest_accessory::getCustomId() const {
    return m_custom_id;
}
void OAISectionComponentForMessageRequest_accessory::setCustomId(const QString &custom_id) {
    m_custom_id = custom_id;
    m_custom_id_isSet = true;
}

bool OAISectionComponentForMessageRequest_accessory::is_custom_id_Set() const{
    return m_custom_id_isSet;
}

bool OAISectionComponentForMessageRequest_accessory::is_custom_id_Valid() const{
    return m_custom_id_isValid;
}

QString OAISectionComponentForMessageRequest_accessory::getLabel() const {
    return m_label;
}
void OAISectionComponentForMessageRequest_accessory::setLabel(const QString &label) {
    m_label = label;
    m_label_isSet = true;
}

bool OAISectionComponentForMessageRequest_accessory::is_label_Set() const{
    return m_label_isSet;
}

bool OAISectionComponentForMessageRequest_accessory::is_label_Valid() const{
    return m_label_isValid;
}

bool OAISectionComponentForMessageRequest_accessory::isDisabled() const {
    return m_disabled;
}
void OAISectionComponentForMessageRequest_accessory::setDisabled(const bool &disabled) {
    m_disabled = disabled;
    m_disabled_isSet = true;
}

bool OAISectionComponentForMessageRequest_accessory::is_disabled_Set() const{
    return m_disabled_isSet;
}

bool OAISectionComponentForMessageRequest_accessory::is_disabled_Valid() const{
    return m_disabled_isValid;
}

QString OAISectionComponentForMessageRequest_accessory::getUrl() const {
    return m_url;
}
void OAISectionComponentForMessageRequest_accessory::setUrl(const QString &url) {
    m_url = url;
    m_url_isSet = true;
}

bool OAISectionComponentForMessageRequest_accessory::is_url_Set() const{
    return m_url_isSet;
}

bool OAISectionComponentForMessageRequest_accessory::is_url_Valid() const{
    return m_url_isValid;
}

QString OAISectionComponentForMessageRequest_accessory::getSkuId() const {
    return m_sku_id;
}
void OAISectionComponentForMessageRequest_accessory::setSkuId(const QString &sku_id) {
    m_sku_id = sku_id;
    m_sku_id_isSet = true;
}

bool OAISectionComponentForMessageRequest_accessory::is_sku_id_Set() const{
    return m_sku_id_isSet;
}

bool OAISectionComponentForMessageRequest_accessory::is_sku_id_Valid() const{
    return m_sku_id_isValid;
}

OAIComponentEmojiForMessageRequest OAISectionComponentForMessageRequest_accessory::getEmoji() const {
    return m_emoji;
}
void OAISectionComponentForMessageRequest_accessory::setEmoji(const OAIComponentEmojiForMessageRequest &emoji) {
    m_emoji = emoji;
    m_emoji_isSet = true;
}

bool OAISectionComponentForMessageRequest_accessory::is_emoji_Set() const{
    return m_emoji_isSet;
}

bool OAISectionComponentForMessageRequest_accessory::is_emoji_Valid() const{
    return m_emoji_isValid;
}

QString OAISectionComponentForMessageRequest_accessory::getDescription() const {
    return m_description;
}
void OAISectionComponentForMessageRequest_accessory::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAISectionComponentForMessageRequest_accessory::is_description_Set() const{
    return m_description_isSet;
}

bool OAISectionComponentForMessageRequest_accessory::is_description_Valid() const{
    return m_description_isValid;
}

bool OAISectionComponentForMessageRequest_accessory::isSpoiler() const {
    return m_spoiler;
}
void OAISectionComponentForMessageRequest_accessory::setSpoiler(const bool &spoiler) {
    m_spoiler = spoiler;
    m_spoiler_isSet = true;
}

bool OAISectionComponentForMessageRequest_accessory::is_spoiler_Set() const{
    return m_spoiler_isSet;
}

bool OAISectionComponentForMessageRequest_accessory::is_spoiler_Valid() const{
    return m_spoiler_isValid;
}

bool OAISectionComponentForMessageRequest_accessory::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_style_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_media.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_custom_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_label_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_disabled_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sku_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_emoji.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_spoiler_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISectionComponentForMessageRequest_accessory::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_style_isValid && m_media_isValid && true;
}

} // namespace dc_rest
