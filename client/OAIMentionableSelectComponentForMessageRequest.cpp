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

#include "OAIMentionableSelectComponentForMessageRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIMentionableSelectComponentForMessageRequest::OAIMentionableSelectComponentForMessageRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMentionableSelectComponentForMessageRequest::OAIMentionableSelectComponentForMessageRequest() {
    this->initializeModel();
}

OAIMentionableSelectComponentForMessageRequest::~OAIMentionableSelectComponentForMessageRequest() {}

void OAIMentionableSelectComponentForMessageRequest::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_custom_id_isSet = false;
    m_custom_id_isValid = false;

    m_placeholder_isSet = false;
    m_placeholder_isValid = false;

    m_min_values_isSet = false;
    m_min_values_isValid = false;

    m_max_values_isSet = false;
    m_max_values_isValid = false;

    m_disabled_isSet = false;
    m_disabled_isValid = false;

    m_default_values_isSet = false;
    m_default_values_isValid = false;
}

void OAIMentionableSelectComponentForMessageRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMentionableSelectComponentForMessageRequest::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_custom_id_isValid = ::dc_rest::fromJsonValue(m_custom_id, json[QString("custom_id")]);
    m_custom_id_isSet = !json[QString("custom_id")].isNull() && m_custom_id_isValid;

    m_placeholder_isValid = ::dc_rest::fromJsonValue(m_placeholder, json[QString("placeholder")]);
    m_placeholder_isSet = !json[QString("placeholder")].isNull() && m_placeholder_isValid;

    m_min_values_isValid = ::dc_rest::fromJsonValue(m_min_values, json[QString("min_values")]);
    m_min_values_isSet = !json[QString("min_values")].isNull() && m_min_values_isValid;

    m_max_values_isValid = ::dc_rest::fromJsonValue(m_max_values, json[QString("max_values")]);
    m_max_values_isSet = !json[QString("max_values")].isNull() && m_max_values_isValid;

    m_disabled_isValid = ::dc_rest::fromJsonValue(m_disabled, json[QString("disabled")]);
    m_disabled_isSet = !json[QString("disabled")].isNull() && m_disabled_isValid;

    m_default_values_isValid = ::dc_rest::fromJsonValue(m_default_values, json[QString("default_values")]);
    m_default_values_isSet = !json[QString("default_values")].isNull() && m_default_values_isValid;
}

QString OAIMentionableSelectComponentForMessageRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMentionableSelectComponentForMessageRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_custom_id_isSet) {
        obj.insert(QString("custom_id"), ::dc_rest::toJsonValue(m_custom_id));
    }
    if (m_placeholder_isSet) {
        obj.insert(QString("placeholder"), ::dc_rest::toJsonValue(m_placeholder));
    }
    if (m_min_values_isSet) {
        obj.insert(QString("min_values"), ::dc_rest::toJsonValue(m_min_values));
    }
    if (m_max_values_isSet) {
        obj.insert(QString("max_values"), ::dc_rest::toJsonValue(m_max_values));
    }
    if (m_disabled_isSet) {
        obj.insert(QString("disabled"), ::dc_rest::toJsonValue(m_disabled));
    }
    if (m_default_values.size() > 0) {
        obj.insert(QString("default_values"), ::dc_rest::toJsonValue(m_default_values));
    }
    return obj;
}

qint32 OAIMentionableSelectComponentForMessageRequest::getType() const {
    return m_type;
}
void OAIMentionableSelectComponentForMessageRequest::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIMentionableSelectComponentForMessageRequest::is_type_Set() const{
    return m_type_isSet;
}

bool OAIMentionableSelectComponentForMessageRequest::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIMentionableSelectComponentForMessageRequest::getCustomId() const {
    return m_custom_id;
}
void OAIMentionableSelectComponentForMessageRequest::setCustomId(const QString &custom_id) {
    m_custom_id = custom_id;
    m_custom_id_isSet = true;
}

bool OAIMentionableSelectComponentForMessageRequest::is_custom_id_Set() const{
    return m_custom_id_isSet;
}

bool OAIMentionableSelectComponentForMessageRequest::is_custom_id_Valid() const{
    return m_custom_id_isValid;
}

QString OAIMentionableSelectComponentForMessageRequest::getPlaceholder() const {
    return m_placeholder;
}
void OAIMentionableSelectComponentForMessageRequest::setPlaceholder(const QString &placeholder) {
    m_placeholder = placeholder;
    m_placeholder_isSet = true;
}

bool OAIMentionableSelectComponentForMessageRequest::is_placeholder_Set() const{
    return m_placeholder_isSet;
}

bool OAIMentionableSelectComponentForMessageRequest::is_placeholder_Valid() const{
    return m_placeholder_isValid;
}

qint32 OAIMentionableSelectComponentForMessageRequest::getMinValues() const {
    return m_min_values;
}
void OAIMentionableSelectComponentForMessageRequest::setMinValues(const qint32 &min_values) {
    m_min_values = min_values;
    m_min_values_isSet = true;
}

bool OAIMentionableSelectComponentForMessageRequest::is_min_values_Set() const{
    return m_min_values_isSet;
}

bool OAIMentionableSelectComponentForMessageRequest::is_min_values_Valid() const{
    return m_min_values_isValid;
}

qint32 OAIMentionableSelectComponentForMessageRequest::getMaxValues() const {
    return m_max_values;
}
void OAIMentionableSelectComponentForMessageRequest::setMaxValues(const qint32 &max_values) {
    m_max_values = max_values;
    m_max_values_isSet = true;
}

bool OAIMentionableSelectComponentForMessageRequest::is_max_values_Set() const{
    return m_max_values_isSet;
}

bool OAIMentionableSelectComponentForMessageRequest::is_max_values_Valid() const{
    return m_max_values_isValid;
}

bool OAIMentionableSelectComponentForMessageRequest::isDisabled() const {
    return m_disabled;
}
void OAIMentionableSelectComponentForMessageRequest::setDisabled(const bool &disabled) {
    m_disabled = disabled;
    m_disabled_isSet = true;
}

bool OAIMentionableSelectComponentForMessageRequest::is_disabled_Set() const{
    return m_disabled_isSet;
}

bool OAIMentionableSelectComponentForMessageRequest::is_disabled_Valid() const{
    return m_disabled_isValid;
}

QList<OAIMentionableSelectComponentForMessageRequest_default_values_inner> OAIMentionableSelectComponentForMessageRequest::getDefaultValues() const {
    return m_default_values;
}
void OAIMentionableSelectComponentForMessageRequest::setDefaultValues(const QList<OAIMentionableSelectComponentForMessageRequest_default_values_inner> &default_values) {
    m_default_values = default_values;
    m_default_values_isSet = true;
}

bool OAIMentionableSelectComponentForMessageRequest::is_default_values_Set() const{
    return m_default_values_isSet;
}

bool OAIMentionableSelectComponentForMessageRequest::is_default_values_Valid() const{
    return m_default_values_isValid;
}

bool OAIMentionableSelectComponentForMessageRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_custom_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_placeholder_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_min_values_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_max_values_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_disabled_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_default_values.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMentionableSelectComponentForMessageRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_custom_id_isValid && true;
}

} // namespace dc_rest
