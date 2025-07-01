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

#include "OAISeparatorComponentForMessageRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAISeparatorComponentForMessageRequest::OAISeparatorComponentForMessageRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISeparatorComponentForMessageRequest::OAISeparatorComponentForMessageRequest() {
    this->initializeModel();
}

OAISeparatorComponentForMessageRequest::~OAISeparatorComponentForMessageRequest() {}

void OAISeparatorComponentForMessageRequest::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_spacing_isSet = false;
    m_spacing_isValid = false;

    m_divider_isSet = false;
    m_divider_isValid = false;
}

void OAISeparatorComponentForMessageRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISeparatorComponentForMessageRequest::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_spacing_isValid = ::dc_rest::fromJsonValue(m_spacing, json[QString("spacing")]);
    m_spacing_isSet = !json[QString("spacing")].isNull() && m_spacing_isValid;

    m_divider_isValid = ::dc_rest::fromJsonValue(m_divider, json[QString("divider")]);
    m_divider_isSet = !json[QString("divider")].isNull() && m_divider_isValid;
}

QString OAISeparatorComponentForMessageRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISeparatorComponentForMessageRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_spacing_isSet) {
        obj.insert(QString("spacing"), ::dc_rest::toJsonValue(m_spacing));
    }
    if (m_divider_isSet) {
        obj.insert(QString("divider"), ::dc_rest::toJsonValue(m_divider));
    }
    return obj;
}

qint32 OAISeparatorComponentForMessageRequest::getType() const {
    return m_type;
}
void OAISeparatorComponentForMessageRequest::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAISeparatorComponentForMessageRequest::is_type_Set() const{
    return m_type_isSet;
}

bool OAISeparatorComponentForMessageRequest::is_type_Valid() const{
    return m_type_isValid;
}

qint32 OAISeparatorComponentForMessageRequest::getSpacing() const {
    return m_spacing;
}
void OAISeparatorComponentForMessageRequest::setSpacing(const qint32 &spacing) {
    m_spacing = spacing;
    m_spacing_isSet = true;
}

bool OAISeparatorComponentForMessageRequest::is_spacing_Set() const{
    return m_spacing_isSet;
}

bool OAISeparatorComponentForMessageRequest::is_spacing_Valid() const{
    return m_spacing_isValid;
}

bool OAISeparatorComponentForMessageRequest::isDivider() const {
    return m_divider;
}
void OAISeparatorComponentForMessageRequest::setDivider(const bool &divider) {
    m_divider = divider;
    m_divider_isSet = true;
}

bool OAISeparatorComponentForMessageRequest::is_divider_Set() const{
    return m_divider_isSet;
}

bool OAISeparatorComponentForMessageRequest::is_divider_Valid() const{
    return m_divider_isValid;
}

bool OAISeparatorComponentForMessageRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
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

bool OAISeparatorComponentForMessageRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && true;
}

} // namespace dc_rest
