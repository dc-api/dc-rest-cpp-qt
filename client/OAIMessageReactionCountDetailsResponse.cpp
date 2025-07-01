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

#include "OAIMessageReactionCountDetailsResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIMessageReactionCountDetailsResponse::OAIMessageReactionCountDetailsResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMessageReactionCountDetailsResponse::OAIMessageReactionCountDetailsResponse() {
    this->initializeModel();
}

OAIMessageReactionCountDetailsResponse::~OAIMessageReactionCountDetailsResponse() {}

void OAIMessageReactionCountDetailsResponse::initializeModel() {

    m_burst_isSet = false;
    m_burst_isValid = false;

    m_normal_isSet = false;
    m_normal_isValid = false;
}

void OAIMessageReactionCountDetailsResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMessageReactionCountDetailsResponse::fromJsonObject(QJsonObject json) {

    m_burst_isValid = ::dc_rest::fromJsonValue(m_burst, json[QString("burst")]);
    m_burst_isSet = !json[QString("burst")].isNull() && m_burst_isValid;

    m_normal_isValid = ::dc_rest::fromJsonValue(m_normal, json[QString("normal")]);
    m_normal_isSet = !json[QString("normal")].isNull() && m_normal_isValid;
}

QString OAIMessageReactionCountDetailsResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMessageReactionCountDetailsResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_burst_isSet) {
        obj.insert(QString("burst"), ::dc_rest::toJsonValue(m_burst));
    }
    if (m_normal_isSet) {
        obj.insert(QString("normal"), ::dc_rest::toJsonValue(m_normal));
    }
    return obj;
}

qint32 OAIMessageReactionCountDetailsResponse::getBurst() const {
    return m_burst;
}
void OAIMessageReactionCountDetailsResponse::setBurst(const qint32 &burst) {
    m_burst = burst;
    m_burst_isSet = true;
}

bool OAIMessageReactionCountDetailsResponse::is_burst_Set() const{
    return m_burst_isSet;
}

bool OAIMessageReactionCountDetailsResponse::is_burst_Valid() const{
    return m_burst_isValid;
}

qint32 OAIMessageReactionCountDetailsResponse::getNormal() const {
    return m_normal;
}
void OAIMessageReactionCountDetailsResponse::setNormal(const qint32 &normal) {
    m_normal = normal;
    m_normal_isSet = true;
}

bool OAIMessageReactionCountDetailsResponse::is_normal_Set() const{
    return m_normal_isSet;
}

bool OAIMessageReactionCountDetailsResponse::is_normal_Valid() const{
    return m_normal_isValid;
}

bool OAIMessageReactionCountDetailsResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_burst_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_normal_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMessageReactionCountDetailsResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_burst_isValid && m_normal_isValid && true;
}

} // namespace dc_rest
