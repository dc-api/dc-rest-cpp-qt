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

#include "OAIButtonComponentForMessageRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIButtonComponentForMessageRequest::OAIButtonComponentForMessageRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIButtonComponentForMessageRequest::OAIButtonComponentForMessageRequest() {
    this->initializeModel();
}

OAIButtonComponentForMessageRequest::~OAIButtonComponentForMessageRequest() {}

void OAIButtonComponentForMessageRequest::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_style_isSet = false;
    m_style_isValid = false;

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
}

void OAIButtonComponentForMessageRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIButtonComponentForMessageRequest::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_style_isValid = ::dc_rest::fromJsonValue(m_style, json[QString("style")]);
    m_style_isSet = !json[QString("style")].isNull() && m_style_isValid;

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
}

QString OAIButtonComponentForMessageRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIButtonComponentForMessageRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_style_isSet) {
        obj.insert(QString("style"), ::dc_rest::toJsonValue(m_style));
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
    return obj;
}

qint32 OAIButtonComponentForMessageRequest::getType() const {
    return m_type;
}
void OAIButtonComponentForMessageRequest::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIButtonComponentForMessageRequest::is_type_Set() const{
    return m_type_isSet;
}

bool OAIButtonComponentForMessageRequest::is_type_Valid() const{
    return m_type_isValid;
}

qint32 OAIButtonComponentForMessageRequest::getStyle() const {
    return m_style;
}
void OAIButtonComponentForMessageRequest::setStyle(const qint32 &style) {
    m_style = style;
    m_style_isSet = true;
}

bool OAIButtonComponentForMessageRequest::is_style_Set() const{
    return m_style_isSet;
}

bool OAIButtonComponentForMessageRequest::is_style_Valid() const{
    return m_style_isValid;
}

QString OAIButtonComponentForMessageRequest::getCustomId() const {
    return m_custom_id;
}
void OAIButtonComponentForMessageRequest::setCustomId(const QString &custom_id) {
    m_custom_id = custom_id;
    m_custom_id_isSet = true;
}

bool OAIButtonComponentForMessageRequest::is_custom_id_Set() const{
    return m_custom_id_isSet;
}

bool OAIButtonComponentForMessageRequest::is_custom_id_Valid() const{
    return m_custom_id_isValid;
}

QString OAIButtonComponentForMessageRequest::getLabel() const {
    return m_label;
}
void OAIButtonComponentForMessageRequest::setLabel(const QString &label) {
    m_label = label;
    m_label_isSet = true;
}

bool OAIButtonComponentForMessageRequest::is_label_Set() const{
    return m_label_isSet;
}

bool OAIButtonComponentForMessageRequest::is_label_Valid() const{
    return m_label_isValid;
}

bool OAIButtonComponentForMessageRequest::isDisabled() const {
    return m_disabled;
}
void OAIButtonComponentForMessageRequest::setDisabled(const bool &disabled) {
    m_disabled = disabled;
    m_disabled_isSet = true;
}

bool OAIButtonComponentForMessageRequest::is_disabled_Set() const{
    return m_disabled_isSet;
}

bool OAIButtonComponentForMessageRequest::is_disabled_Valid() const{
    return m_disabled_isValid;
}

QString OAIButtonComponentForMessageRequest::getUrl() const {
    return m_url;
}
void OAIButtonComponentForMessageRequest::setUrl(const QString &url) {
    m_url = url;
    m_url_isSet = true;
}

bool OAIButtonComponentForMessageRequest::is_url_Set() const{
    return m_url_isSet;
}

bool OAIButtonComponentForMessageRequest::is_url_Valid() const{
    return m_url_isValid;
}

QString OAIButtonComponentForMessageRequest::getSkuId() const {
    return m_sku_id;
}
void OAIButtonComponentForMessageRequest::setSkuId(const QString &sku_id) {
    m_sku_id = sku_id;
    m_sku_id_isSet = true;
}

bool OAIButtonComponentForMessageRequest::is_sku_id_Set() const{
    return m_sku_id_isSet;
}

bool OAIButtonComponentForMessageRequest::is_sku_id_Valid() const{
    return m_sku_id_isValid;
}

OAIComponentEmojiForMessageRequest OAIButtonComponentForMessageRequest::getEmoji() const {
    return m_emoji;
}
void OAIButtonComponentForMessageRequest::setEmoji(const OAIComponentEmojiForMessageRequest &emoji) {
    m_emoji = emoji;
    m_emoji_isSet = true;
}

bool OAIButtonComponentForMessageRequest::is_emoji_Set() const{
    return m_emoji_isSet;
}

bool OAIButtonComponentForMessageRequest::is_emoji_Valid() const{
    return m_emoji_isValid;
}

bool OAIButtonComponentForMessageRequest::isSet() const {
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
    } while (false);
    return isObjectUpdated;
}

bool OAIButtonComponentForMessageRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_style_isValid && true;
}

} // namespace dc_rest
