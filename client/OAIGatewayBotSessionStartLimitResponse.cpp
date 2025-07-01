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

#include "OAIGatewayBotSessionStartLimitResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIGatewayBotSessionStartLimitResponse::OAIGatewayBotSessionStartLimitResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGatewayBotSessionStartLimitResponse::OAIGatewayBotSessionStartLimitResponse() {
    this->initializeModel();
}

OAIGatewayBotSessionStartLimitResponse::~OAIGatewayBotSessionStartLimitResponse() {}

void OAIGatewayBotSessionStartLimitResponse::initializeModel() {

    m_max_concurrency_isSet = false;
    m_max_concurrency_isValid = false;

    m_remaining_isSet = false;
    m_remaining_isValid = false;

    m_reset_after_isSet = false;
    m_reset_after_isValid = false;

    m_total_isSet = false;
    m_total_isValid = false;
}

void OAIGatewayBotSessionStartLimitResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGatewayBotSessionStartLimitResponse::fromJsonObject(QJsonObject json) {

    m_max_concurrency_isValid = ::dc_rest::fromJsonValue(m_max_concurrency, json[QString("max_concurrency")]);
    m_max_concurrency_isSet = !json[QString("max_concurrency")].isNull() && m_max_concurrency_isValid;

    m_remaining_isValid = ::dc_rest::fromJsonValue(m_remaining, json[QString("remaining")]);
    m_remaining_isSet = !json[QString("remaining")].isNull() && m_remaining_isValid;

    m_reset_after_isValid = ::dc_rest::fromJsonValue(m_reset_after, json[QString("reset_after")]);
    m_reset_after_isSet = !json[QString("reset_after")].isNull() && m_reset_after_isValid;

    m_total_isValid = ::dc_rest::fromJsonValue(m_total, json[QString("total")]);
    m_total_isSet = !json[QString("total")].isNull() && m_total_isValid;
}

QString OAIGatewayBotSessionStartLimitResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGatewayBotSessionStartLimitResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_max_concurrency_isSet) {
        obj.insert(QString("max_concurrency"), ::dc_rest::toJsonValue(m_max_concurrency));
    }
    if (m_remaining_isSet) {
        obj.insert(QString("remaining"), ::dc_rest::toJsonValue(m_remaining));
    }
    if (m_reset_after_isSet) {
        obj.insert(QString("reset_after"), ::dc_rest::toJsonValue(m_reset_after));
    }
    if (m_total_isSet) {
        obj.insert(QString("total"), ::dc_rest::toJsonValue(m_total));
    }
    return obj;
}

qint32 OAIGatewayBotSessionStartLimitResponse::getMaxConcurrency() const {
    return m_max_concurrency;
}
void OAIGatewayBotSessionStartLimitResponse::setMaxConcurrency(const qint32 &max_concurrency) {
    m_max_concurrency = max_concurrency;
    m_max_concurrency_isSet = true;
}

bool OAIGatewayBotSessionStartLimitResponse::is_max_concurrency_Set() const{
    return m_max_concurrency_isSet;
}

bool OAIGatewayBotSessionStartLimitResponse::is_max_concurrency_Valid() const{
    return m_max_concurrency_isValid;
}

qint32 OAIGatewayBotSessionStartLimitResponse::getRemaining() const {
    return m_remaining;
}
void OAIGatewayBotSessionStartLimitResponse::setRemaining(const qint32 &remaining) {
    m_remaining = remaining;
    m_remaining_isSet = true;
}

bool OAIGatewayBotSessionStartLimitResponse::is_remaining_Set() const{
    return m_remaining_isSet;
}

bool OAIGatewayBotSessionStartLimitResponse::is_remaining_Valid() const{
    return m_remaining_isValid;
}

qint32 OAIGatewayBotSessionStartLimitResponse::getResetAfter() const {
    return m_reset_after;
}
void OAIGatewayBotSessionStartLimitResponse::setResetAfter(const qint32 &reset_after) {
    m_reset_after = reset_after;
    m_reset_after_isSet = true;
}

bool OAIGatewayBotSessionStartLimitResponse::is_reset_after_Set() const{
    return m_reset_after_isSet;
}

bool OAIGatewayBotSessionStartLimitResponse::is_reset_after_Valid() const{
    return m_reset_after_isValid;
}

qint32 OAIGatewayBotSessionStartLimitResponse::getTotal() const {
    return m_total;
}
void OAIGatewayBotSessionStartLimitResponse::setTotal(const qint32 &total) {
    m_total = total;
    m_total_isSet = true;
}

bool OAIGatewayBotSessionStartLimitResponse::is_total_Set() const{
    return m_total_isSet;
}

bool OAIGatewayBotSessionStartLimitResponse::is_total_Valid() const{
    return m_total_isValid;
}

bool OAIGatewayBotSessionStartLimitResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_max_concurrency_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_remaining_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_reset_after_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_total_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGatewayBotSessionStartLimitResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_max_concurrency_isValid && m_remaining_isValid && m_reset_after_isValid && m_total_isValid && true;
}

} // namespace dc_rest
