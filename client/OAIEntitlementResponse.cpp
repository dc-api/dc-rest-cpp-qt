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

#include "OAIEntitlementResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIEntitlementResponse::OAIEntitlementResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEntitlementResponse::OAIEntitlementResponse() {
    this->initializeModel();
}

OAIEntitlementResponse::~OAIEntitlementResponse() {}

void OAIEntitlementResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_sku_id_isSet = false;
    m_sku_id_isValid = false;

    m_application_id_isSet = false;
    m_application_id_isValid = false;

    m_user_id_isSet = false;
    m_user_id_isValid = false;

    m_deleted_isSet = false;
    m_deleted_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_guild_id_isSet = false;
    m_guild_id_isValid = false;

    m_starts_at_isSet = false;
    m_starts_at_isValid = false;

    m_ends_at_isSet = false;
    m_ends_at_isValid = false;

    m_fulfilled_at_isSet = false;
    m_fulfilled_at_isValid = false;

    m_fulfillment_status_isSet = false;
    m_fulfillment_status_isValid = false;

    m_consumed_isSet = false;
    m_consumed_isValid = false;
}

void OAIEntitlementResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEntitlementResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_sku_id_isValid = ::dc_rest::fromJsonValue(m_sku_id, json[QString("sku_id")]);
    m_sku_id_isSet = !json[QString("sku_id")].isNull() && m_sku_id_isValid;

    m_application_id_isValid = ::dc_rest::fromJsonValue(m_application_id, json[QString("application_id")]);
    m_application_id_isSet = !json[QString("application_id")].isNull() && m_application_id_isValid;

    m_user_id_isValid = ::dc_rest::fromJsonValue(m_user_id, json[QString("user_id")]);
    m_user_id_isSet = !json[QString("user_id")].isNull() && m_user_id_isValid;

    m_deleted_isValid = ::dc_rest::fromJsonValue(m_deleted, json[QString("deleted")]);
    m_deleted_isSet = !json[QString("deleted")].isNull() && m_deleted_isValid;

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_guild_id_isValid = ::dc_rest::fromJsonValue(m_guild_id, json[QString("guild_id")]);
    m_guild_id_isSet = !json[QString("guild_id")].isNull() && m_guild_id_isValid;

    m_starts_at_isValid = ::dc_rest::fromJsonValue(m_starts_at, json[QString("starts_at")]);
    m_starts_at_isSet = !json[QString("starts_at")].isNull() && m_starts_at_isValid;

    m_ends_at_isValid = ::dc_rest::fromJsonValue(m_ends_at, json[QString("ends_at")]);
    m_ends_at_isSet = !json[QString("ends_at")].isNull() && m_ends_at_isValid;

    m_fulfilled_at_isValid = ::dc_rest::fromJsonValue(m_fulfilled_at, json[QString("fulfilled_at")]);
    m_fulfilled_at_isSet = !json[QString("fulfilled_at")].isNull() && m_fulfilled_at_isValid;

    m_fulfillment_status_isValid = ::dc_rest::fromJsonValue(m_fulfillment_status, json[QString("fulfillment_status")]);
    m_fulfillment_status_isSet = !json[QString("fulfillment_status")].isNull() && m_fulfillment_status_isValid;

    m_consumed_isValid = ::dc_rest::fromJsonValue(m_consumed, json[QString("consumed")]);
    m_consumed_isSet = !json[QString("consumed")].isNull() && m_consumed_isValid;
}

QString OAIEntitlementResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEntitlementResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_sku_id_isSet) {
        obj.insert(QString("sku_id"), ::dc_rest::toJsonValue(m_sku_id));
    }
    if (m_application_id_isSet) {
        obj.insert(QString("application_id"), ::dc_rest::toJsonValue(m_application_id));
    }
    if (m_user_id_isSet) {
        obj.insert(QString("user_id"), ::dc_rest::toJsonValue(m_user_id));
    }
    if (m_deleted_isSet) {
        obj.insert(QString("deleted"), ::dc_rest::toJsonValue(m_deleted));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_guild_id_isSet) {
        obj.insert(QString("guild_id"), ::dc_rest::toJsonValue(m_guild_id));
    }
    if (m_starts_at_isSet) {
        obj.insert(QString("starts_at"), ::dc_rest::toJsonValue(m_starts_at));
    }
    if (m_ends_at_isSet) {
        obj.insert(QString("ends_at"), ::dc_rest::toJsonValue(m_ends_at));
    }
    if (m_fulfilled_at_isSet) {
        obj.insert(QString("fulfilled_at"), ::dc_rest::toJsonValue(m_fulfilled_at));
    }
    if (m_fulfillment_status_isSet) {
        obj.insert(QString("fulfillment_status"), ::dc_rest::toJsonValue(m_fulfillment_status));
    }
    if (m_consumed_isSet) {
        obj.insert(QString("consumed"), ::dc_rest::toJsonValue(m_consumed));
    }
    return obj;
}

QString OAIEntitlementResponse::getId() const {
    return m_id;
}
void OAIEntitlementResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIEntitlementResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIEntitlementResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIEntitlementResponse::getSkuId() const {
    return m_sku_id;
}
void OAIEntitlementResponse::setSkuId(const QString &sku_id) {
    m_sku_id = sku_id;
    m_sku_id_isSet = true;
}

bool OAIEntitlementResponse::is_sku_id_Set() const{
    return m_sku_id_isSet;
}

bool OAIEntitlementResponse::is_sku_id_Valid() const{
    return m_sku_id_isValid;
}

QString OAIEntitlementResponse::getApplicationId() const {
    return m_application_id;
}
void OAIEntitlementResponse::setApplicationId(const QString &application_id) {
    m_application_id = application_id;
    m_application_id_isSet = true;
}

bool OAIEntitlementResponse::is_application_id_Set() const{
    return m_application_id_isSet;
}

bool OAIEntitlementResponse::is_application_id_Valid() const{
    return m_application_id_isValid;
}

QString OAIEntitlementResponse::getUserId() const {
    return m_user_id;
}
void OAIEntitlementResponse::setUserId(const QString &user_id) {
    m_user_id = user_id;
    m_user_id_isSet = true;
}

bool OAIEntitlementResponse::is_user_id_Set() const{
    return m_user_id_isSet;
}

bool OAIEntitlementResponse::is_user_id_Valid() const{
    return m_user_id_isValid;
}

bool OAIEntitlementResponse::isDeleted() const {
    return m_deleted;
}
void OAIEntitlementResponse::setDeleted(const bool &deleted) {
    m_deleted = deleted;
    m_deleted_isSet = true;
}

bool OAIEntitlementResponse::is_deleted_Set() const{
    return m_deleted_isSet;
}

bool OAIEntitlementResponse::is_deleted_Valid() const{
    return m_deleted_isValid;
}

qint32 OAIEntitlementResponse::getType() const {
    return m_type;
}
void OAIEntitlementResponse::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIEntitlementResponse::is_type_Set() const{
    return m_type_isSet;
}

bool OAIEntitlementResponse::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIEntitlementResponse::getGuildId() const {
    return m_guild_id;
}
void OAIEntitlementResponse::setGuildId(const QString &guild_id) {
    m_guild_id = guild_id;
    m_guild_id_isSet = true;
}

bool OAIEntitlementResponse::is_guild_id_Set() const{
    return m_guild_id_isSet;
}

bool OAIEntitlementResponse::is_guild_id_Valid() const{
    return m_guild_id_isValid;
}

QDateTime OAIEntitlementResponse::getStartsAt() const {
    return m_starts_at;
}
void OAIEntitlementResponse::setStartsAt(const QDateTime &starts_at) {
    m_starts_at = starts_at;
    m_starts_at_isSet = true;
}

bool OAIEntitlementResponse::is_starts_at_Set() const{
    return m_starts_at_isSet;
}

bool OAIEntitlementResponse::is_starts_at_Valid() const{
    return m_starts_at_isValid;
}

QDateTime OAIEntitlementResponse::getEndsAt() const {
    return m_ends_at;
}
void OAIEntitlementResponse::setEndsAt(const QDateTime &ends_at) {
    m_ends_at = ends_at;
    m_ends_at_isSet = true;
}

bool OAIEntitlementResponse::is_ends_at_Set() const{
    return m_ends_at_isSet;
}

bool OAIEntitlementResponse::is_ends_at_Valid() const{
    return m_ends_at_isValid;
}

QDateTime OAIEntitlementResponse::getFulfilledAt() const {
    return m_fulfilled_at;
}
void OAIEntitlementResponse::setFulfilledAt(const QDateTime &fulfilled_at) {
    m_fulfilled_at = fulfilled_at;
    m_fulfilled_at_isSet = true;
}

bool OAIEntitlementResponse::is_fulfilled_at_Set() const{
    return m_fulfilled_at_isSet;
}

bool OAIEntitlementResponse::is_fulfilled_at_Valid() const{
    return m_fulfilled_at_isValid;
}

qint32 OAIEntitlementResponse::getFulfillmentStatus() const {
    return m_fulfillment_status;
}
void OAIEntitlementResponse::setFulfillmentStatus(const qint32 &fulfillment_status) {
    m_fulfillment_status = fulfillment_status;
    m_fulfillment_status_isSet = true;
}

bool OAIEntitlementResponse::is_fulfillment_status_Set() const{
    return m_fulfillment_status_isSet;
}

bool OAIEntitlementResponse::is_fulfillment_status_Valid() const{
    return m_fulfillment_status_isValid;
}

bool OAIEntitlementResponse::isConsumed() const {
    return m_consumed;
}
void OAIEntitlementResponse::setConsumed(const bool &consumed) {
    m_consumed = consumed;
    m_consumed_isSet = true;
}

bool OAIEntitlementResponse::is_consumed_Set() const{
    return m_consumed_isSet;
}

bool OAIEntitlementResponse::is_consumed_Valid() const{
    return m_consumed_isValid;
}

bool OAIEntitlementResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sku_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_application_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_deleted_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_guild_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_starts_at_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_ends_at_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fulfilled_at_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fulfillment_status_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_consumed_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEntitlementResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_sku_id_isValid && m_application_id_isValid && m_user_id_isValid && m_deleted_isValid && m_type_isValid && true;
}

} // namespace dc_rest
