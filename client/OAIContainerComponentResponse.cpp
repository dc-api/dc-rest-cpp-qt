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

#include "OAIContainerComponentResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIContainerComponentResponse::OAIContainerComponentResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIContainerComponentResponse::OAIContainerComponentResponse() {
    this->initializeModel();
}

OAIContainerComponentResponse::~OAIContainerComponentResponse() {}

void OAIContainerComponentResponse::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_components_isSet = false;
    m_components_isValid = false;

    m_spoiler_isSet = false;
    m_spoiler_isValid = false;

    m_accent_color_isSet = false;
    m_accent_color_isValid = false;
}

void OAIContainerComponentResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIContainerComponentResponse::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_components_isValid = ::dc_rest::fromJsonValue(m_components, json[QString("components")]);
    m_components_isSet = !json[QString("components")].isNull() && m_components_isValid;

    m_spoiler_isValid = ::dc_rest::fromJsonValue(m_spoiler, json[QString("spoiler")]);
    m_spoiler_isSet = !json[QString("spoiler")].isNull() && m_spoiler_isValid;

    m_accent_color_isValid = ::dc_rest::fromJsonValue(m_accent_color, json[QString("accent_color")]);
    m_accent_color_isSet = !json[QString("accent_color")].isNull() && m_accent_color_isValid;
}

QString OAIContainerComponentResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIContainerComponentResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_components.size() > 0) {
        obj.insert(QString("components"), ::dc_rest::toJsonValue(m_components));
    }
    if (m_spoiler_isSet) {
        obj.insert(QString("spoiler"), ::dc_rest::toJsonValue(m_spoiler));
    }
    if (m_accent_color_isSet) {
        obj.insert(QString("accent_color"), ::dc_rest::toJsonValue(m_accent_color));
    }
    return obj;
}

qint32 OAIContainerComponentResponse::getType() const {
    return m_type;
}
void OAIContainerComponentResponse::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIContainerComponentResponse::is_type_Set() const{
    return m_type_isSet;
}

bool OAIContainerComponentResponse::is_type_Valid() const{
    return m_type_isValid;
}

qint32 OAIContainerComponentResponse::getId() const {
    return m_id;
}
void OAIContainerComponentResponse::setId(const qint32 &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIContainerComponentResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIContainerComponentResponse::is_id_Valid() const{
    return m_id_isValid;
}

QList<OAIContainerComponentResponse_components_inner> OAIContainerComponentResponse::getComponents() const {
    return m_components;
}
void OAIContainerComponentResponse::setComponents(const QList<OAIContainerComponentResponse_components_inner> &components) {
    m_components = components;
    m_components_isSet = true;
}

bool OAIContainerComponentResponse::is_components_Set() const{
    return m_components_isSet;
}

bool OAIContainerComponentResponse::is_components_Valid() const{
    return m_components_isValid;
}

bool OAIContainerComponentResponse::isSpoiler() const {
    return m_spoiler;
}
void OAIContainerComponentResponse::setSpoiler(const bool &spoiler) {
    m_spoiler = spoiler;
    m_spoiler_isSet = true;
}

bool OAIContainerComponentResponse::is_spoiler_Set() const{
    return m_spoiler_isSet;
}

bool OAIContainerComponentResponse::is_spoiler_Valid() const{
    return m_spoiler_isValid;
}

qint32 OAIContainerComponentResponse::getAccentColor() const {
    return m_accent_color;
}
void OAIContainerComponentResponse::setAccentColor(const qint32 &accent_color) {
    m_accent_color = accent_color;
    m_accent_color_isSet = true;
}

bool OAIContainerComponentResponse::is_accent_color_Set() const{
    return m_accent_color_isSet;
}

bool OAIContainerComponentResponse::is_accent_color_Valid() const{
    return m_accent_color_isValid;
}

bool OAIContainerComponentResponse::isSet() const {
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

        if (m_components.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_spoiler_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_accent_color_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIContainerComponentResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_id_isValid && m_components_isValid && m_spoiler_isValid && true;
}

} // namespace dc_rest
