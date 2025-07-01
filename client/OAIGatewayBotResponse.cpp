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

#include "OAIGatewayBotResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIGatewayBotResponse::OAIGatewayBotResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGatewayBotResponse::OAIGatewayBotResponse() {
    this->initializeModel();
}

OAIGatewayBotResponse::~OAIGatewayBotResponse() {}

void OAIGatewayBotResponse::initializeModel() {

    m_url_isSet = false;
    m_url_isValid = false;

    m_session_start_limit_isSet = false;
    m_session_start_limit_isValid = false;

    m_shards_isSet = false;
    m_shards_isValid = false;
}

void OAIGatewayBotResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGatewayBotResponse::fromJsonObject(QJsonObject json) {

    m_url_isValid = ::dc_rest::fromJsonValue(m_url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;

    m_session_start_limit_isValid = ::dc_rest::fromJsonValue(m_session_start_limit, json[QString("session_start_limit")]);
    m_session_start_limit_isSet = !json[QString("session_start_limit")].isNull() && m_session_start_limit_isValid;

    m_shards_isValid = ::dc_rest::fromJsonValue(m_shards, json[QString("shards")]);
    m_shards_isSet = !json[QString("shards")].isNull() && m_shards_isValid;
}

QString OAIGatewayBotResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGatewayBotResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_url_isSet) {
        obj.insert(QString("url"), ::dc_rest::toJsonValue(m_url));
    }
    if (m_session_start_limit.isSet()) {
        obj.insert(QString("session_start_limit"), ::dc_rest::toJsonValue(m_session_start_limit));
    }
    if (m_shards_isSet) {
        obj.insert(QString("shards"), ::dc_rest::toJsonValue(m_shards));
    }
    return obj;
}

QString OAIGatewayBotResponse::getUrl() const {
    return m_url;
}
void OAIGatewayBotResponse::setUrl(const QString &url) {
    m_url = url;
    m_url_isSet = true;
}

bool OAIGatewayBotResponse::is_url_Set() const{
    return m_url_isSet;
}

bool OAIGatewayBotResponse::is_url_Valid() const{
    return m_url_isValid;
}

OAIGatewayBotSessionStartLimitResponse OAIGatewayBotResponse::getSessionStartLimit() const {
    return m_session_start_limit;
}
void OAIGatewayBotResponse::setSessionStartLimit(const OAIGatewayBotSessionStartLimitResponse &session_start_limit) {
    m_session_start_limit = session_start_limit;
    m_session_start_limit_isSet = true;
}

bool OAIGatewayBotResponse::is_session_start_limit_Set() const{
    return m_session_start_limit_isSet;
}

bool OAIGatewayBotResponse::is_session_start_limit_Valid() const{
    return m_session_start_limit_isValid;
}

qint32 OAIGatewayBotResponse::getShards() const {
    return m_shards;
}
void OAIGatewayBotResponse::setShards(const qint32 &shards) {
    m_shards = shards;
    m_shards_isSet = true;
}

bool OAIGatewayBotResponse::is_shards_Set() const{
    return m_shards_isSet;
}

bool OAIGatewayBotResponse::is_shards_Valid() const{
    return m_shards_isValid;
}

bool OAIGatewayBotResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_session_start_limit.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_shards_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGatewayBotResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_url_isValid && m_session_start_limit_isValid && m_shards_isValid && true;
}

} // namespace dc_rest
