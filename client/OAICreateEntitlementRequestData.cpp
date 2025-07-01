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

#include "OAICreateEntitlementRequestData.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAICreateEntitlementRequestData::OAICreateEntitlementRequestData(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICreateEntitlementRequestData::OAICreateEntitlementRequestData() {
    this->initializeModel();
}

OAICreateEntitlementRequestData::~OAICreateEntitlementRequestData() {}

void OAICreateEntitlementRequestData::initializeModel() {

    m_sku_id_isSet = false;
    m_sku_id_isValid = false;

    m_owner_id_isSet = false;
    m_owner_id_isValid = false;

    m_owner_type_isSet = false;
    m_owner_type_isValid = false;
}

void OAICreateEntitlementRequestData::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICreateEntitlementRequestData::fromJsonObject(QJsonObject json) {

    m_sku_id_isValid = ::dc_rest::fromJsonValue(m_sku_id, json[QString("sku_id")]);
    m_sku_id_isSet = !json[QString("sku_id")].isNull() && m_sku_id_isValid;

    m_owner_id_isValid = ::dc_rest::fromJsonValue(m_owner_id, json[QString("owner_id")]);
    m_owner_id_isSet = !json[QString("owner_id")].isNull() && m_owner_id_isValid;

    m_owner_type_isValid = ::dc_rest::fromJsonValue(m_owner_type, json[QString("owner_type")]);
    m_owner_type_isSet = !json[QString("owner_type")].isNull() && m_owner_type_isValid;
}

QString OAICreateEntitlementRequestData::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICreateEntitlementRequestData::asJsonObject() const {
    QJsonObject obj;
    if (m_sku_id_isSet) {
        obj.insert(QString("sku_id"), ::dc_rest::toJsonValue(m_sku_id));
    }
    if (m_owner_id_isSet) {
        obj.insert(QString("owner_id"), ::dc_rest::toJsonValue(m_owner_id));
    }
    if (m_owner_type_isSet) {
        obj.insert(QString("owner_type"), ::dc_rest::toJsonValue(m_owner_type));
    }
    return obj;
}

QString OAICreateEntitlementRequestData::getSkuId() const {
    return m_sku_id;
}
void OAICreateEntitlementRequestData::setSkuId(const QString &sku_id) {
    m_sku_id = sku_id;
    m_sku_id_isSet = true;
}

bool OAICreateEntitlementRequestData::is_sku_id_Set() const{
    return m_sku_id_isSet;
}

bool OAICreateEntitlementRequestData::is_sku_id_Valid() const{
    return m_sku_id_isValid;
}

QString OAICreateEntitlementRequestData::getOwnerId() const {
    return m_owner_id;
}
void OAICreateEntitlementRequestData::setOwnerId(const QString &owner_id) {
    m_owner_id = owner_id;
    m_owner_id_isSet = true;
}

bool OAICreateEntitlementRequestData::is_owner_id_Set() const{
    return m_owner_id_isSet;
}

bool OAICreateEntitlementRequestData::is_owner_id_Valid() const{
    return m_owner_id_isValid;
}

qint32 OAICreateEntitlementRequestData::getOwnerType() const {
    return m_owner_type;
}
void OAICreateEntitlementRequestData::setOwnerType(const qint32 &owner_type) {
    m_owner_type = owner_type;
    m_owner_type_isSet = true;
}

bool OAICreateEntitlementRequestData::is_owner_type_Set() const{
    return m_owner_type_isSet;
}

bool OAICreateEntitlementRequestData::is_owner_type_Valid() const{
    return m_owner_type_isValid;
}

bool OAICreateEntitlementRequestData::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_sku_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_owner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_owner_type_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICreateEntitlementRequestData::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_sku_id_isValid && m_owner_id_isValid && m_owner_type_isValid && true;
}

} // namespace dc_rest
