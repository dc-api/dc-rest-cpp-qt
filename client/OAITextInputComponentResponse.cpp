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

#include "OAITextInputComponentResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAITextInputComponentResponse::OAITextInputComponentResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAITextInputComponentResponse::OAITextInputComponentResponse() {
    this->initializeModel();
}

OAITextInputComponentResponse::~OAITextInputComponentResponse() {}

void OAITextInputComponentResponse::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_custom_id_isSet = false;
    m_custom_id_isValid = false;

    m_style_isSet = false;
    m_style_isValid = false;

    m_label_isSet = false;
    m_label_isValid = false;

    m_value_isSet = false;
    m_value_isValid = false;

    m_placeholder_isSet = false;
    m_placeholder_isValid = false;

    m_required_isSet = false;
    m_required_isValid = false;

    m_min_length_isSet = false;
    m_min_length_isValid = false;

    m_max_length_isSet = false;
    m_max_length_isValid = false;
}

void OAITextInputComponentResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAITextInputComponentResponse::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_custom_id_isValid = ::dc_rest::fromJsonValue(m_custom_id, json[QString("custom_id")]);
    m_custom_id_isSet = !json[QString("custom_id")].isNull() && m_custom_id_isValid;

    m_style_isValid = ::dc_rest::fromJsonValue(m_style, json[QString("style")]);
    m_style_isSet = !json[QString("style")].isNull() && m_style_isValid;

    m_label_isValid = ::dc_rest::fromJsonValue(m_label, json[QString("label")]);
    m_label_isSet = !json[QString("label")].isNull() && m_label_isValid;

    m_value_isValid = ::dc_rest::fromJsonValue(m_value, json[QString("value")]);
    m_value_isSet = !json[QString("value")].isNull() && m_value_isValid;

    m_placeholder_isValid = ::dc_rest::fromJsonValue(m_placeholder, json[QString("placeholder")]);
    m_placeholder_isSet = !json[QString("placeholder")].isNull() && m_placeholder_isValid;

    m_required_isValid = ::dc_rest::fromJsonValue(m_required, json[QString("required")]);
    m_required_isSet = !json[QString("required")].isNull() && m_required_isValid;

    m_min_length_isValid = ::dc_rest::fromJsonValue(m_min_length, json[QString("min_length")]);
    m_min_length_isSet = !json[QString("min_length")].isNull() && m_min_length_isValid;

    m_max_length_isValid = ::dc_rest::fromJsonValue(m_max_length, json[QString("max_length")]);
    m_max_length_isSet = !json[QString("max_length")].isNull() && m_max_length_isValid;
}

QString OAITextInputComponentResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAITextInputComponentResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_custom_id_isSet) {
        obj.insert(QString("custom_id"), ::dc_rest::toJsonValue(m_custom_id));
    }
    if (m_style_isSet) {
        obj.insert(QString("style"), ::dc_rest::toJsonValue(m_style));
    }
    if (m_label_isSet) {
        obj.insert(QString("label"), ::dc_rest::toJsonValue(m_label));
    }
    if (m_value_isSet) {
        obj.insert(QString("value"), ::dc_rest::toJsonValue(m_value));
    }
    if (m_placeholder_isSet) {
        obj.insert(QString("placeholder"), ::dc_rest::toJsonValue(m_placeholder));
    }
    if (m_required_isSet) {
        obj.insert(QString("required"), ::dc_rest::toJsonValue(m_required));
    }
    if (m_min_length_isSet) {
        obj.insert(QString("min_length"), ::dc_rest::toJsonValue(m_min_length));
    }
    if (m_max_length_isSet) {
        obj.insert(QString("max_length"), ::dc_rest::toJsonValue(m_max_length));
    }
    return obj;
}

qint32 OAITextInputComponentResponse::getType() const {
    return m_type;
}
void OAITextInputComponentResponse::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAITextInputComponentResponse::is_type_Set() const{
    return m_type_isSet;
}

bool OAITextInputComponentResponse::is_type_Valid() const{
    return m_type_isValid;
}

qint32 OAITextInputComponentResponse::getId() const {
    return m_id;
}
void OAITextInputComponentResponse::setId(const qint32 &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAITextInputComponentResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAITextInputComponentResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAITextInputComponentResponse::getCustomId() const {
    return m_custom_id;
}
void OAITextInputComponentResponse::setCustomId(const QString &custom_id) {
    m_custom_id = custom_id;
    m_custom_id_isSet = true;
}

bool OAITextInputComponentResponse::is_custom_id_Set() const{
    return m_custom_id_isSet;
}

bool OAITextInputComponentResponse::is_custom_id_Valid() const{
    return m_custom_id_isValid;
}

qint32 OAITextInputComponentResponse::getStyle() const {
    return m_style;
}
void OAITextInputComponentResponse::setStyle(const qint32 &style) {
    m_style = style;
    m_style_isSet = true;
}

bool OAITextInputComponentResponse::is_style_Set() const{
    return m_style_isSet;
}

bool OAITextInputComponentResponse::is_style_Valid() const{
    return m_style_isValid;
}

QString OAITextInputComponentResponse::getLabel() const {
    return m_label;
}
void OAITextInputComponentResponse::setLabel(const QString &label) {
    m_label = label;
    m_label_isSet = true;
}

bool OAITextInputComponentResponse::is_label_Set() const{
    return m_label_isSet;
}

bool OAITextInputComponentResponse::is_label_Valid() const{
    return m_label_isValid;
}

QString OAITextInputComponentResponse::getValue() const {
    return m_value;
}
void OAITextInputComponentResponse::setValue(const QString &value) {
    m_value = value;
    m_value_isSet = true;
}

bool OAITextInputComponentResponse::is_value_Set() const{
    return m_value_isSet;
}

bool OAITextInputComponentResponse::is_value_Valid() const{
    return m_value_isValid;
}

QString OAITextInputComponentResponse::getPlaceholder() const {
    return m_placeholder;
}
void OAITextInputComponentResponse::setPlaceholder(const QString &placeholder) {
    m_placeholder = placeholder;
    m_placeholder_isSet = true;
}

bool OAITextInputComponentResponse::is_placeholder_Set() const{
    return m_placeholder_isSet;
}

bool OAITextInputComponentResponse::is_placeholder_Valid() const{
    return m_placeholder_isValid;
}

bool OAITextInputComponentResponse::isRequired() const {
    return m_required;
}
void OAITextInputComponentResponse::setRequired(const bool &required) {
    m_required = required;
    m_required_isSet = true;
}

bool OAITextInputComponentResponse::is_required_Set() const{
    return m_required_isSet;
}

bool OAITextInputComponentResponse::is_required_Valid() const{
    return m_required_isValid;
}

qint32 OAITextInputComponentResponse::getMinLength() const {
    return m_min_length;
}
void OAITextInputComponentResponse::setMinLength(const qint32 &min_length) {
    m_min_length = min_length;
    m_min_length_isSet = true;
}

bool OAITextInputComponentResponse::is_min_length_Set() const{
    return m_min_length_isSet;
}

bool OAITextInputComponentResponse::is_min_length_Valid() const{
    return m_min_length_isValid;
}

qint32 OAITextInputComponentResponse::getMaxLength() const {
    return m_max_length;
}
void OAITextInputComponentResponse::setMaxLength(const qint32 &max_length) {
    m_max_length = max_length;
    m_max_length_isSet = true;
}

bool OAITextInputComponentResponse::is_max_length_Set() const{
    return m_max_length_isSet;
}

bool OAITextInputComponentResponse::is_max_length_Valid() const{
    return m_max_length_isValid;
}

bool OAITextInputComponentResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_custom_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_style_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_label_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_value_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_placeholder_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_required_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_min_length_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_max_length_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAITextInputComponentResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_id_isValid && m_custom_id_isValid && m_style_isValid && true;
}

} // namespace dc_rest
