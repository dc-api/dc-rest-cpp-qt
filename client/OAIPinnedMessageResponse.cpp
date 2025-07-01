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

#include "OAIPinnedMessageResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIPinnedMessageResponse::OAIPinnedMessageResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPinnedMessageResponse::OAIPinnedMessageResponse() {
    this->initializeModel();
}

OAIPinnedMessageResponse::~OAIPinnedMessageResponse() {}

void OAIPinnedMessageResponse::initializeModel() {

    m_pinned_at_isSet = false;
    m_pinned_at_isValid = false;

    m_message_isSet = false;
    m_message_isValid = false;
}

void OAIPinnedMessageResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPinnedMessageResponse::fromJsonObject(QJsonObject json) {

    m_pinned_at_isValid = ::dc_rest::fromJsonValue(m_pinned_at, json[QString("pinned_at")]);
    m_pinned_at_isSet = !json[QString("pinned_at")].isNull() && m_pinned_at_isValid;

    m_message_isValid = ::dc_rest::fromJsonValue(m_message, json[QString("message")]);
    m_message_isSet = !json[QString("message")].isNull() && m_message_isValid;
}

QString OAIPinnedMessageResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPinnedMessageResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_pinned_at_isSet) {
        obj.insert(QString("pinned_at"), ::dc_rest::toJsonValue(m_pinned_at));
    }
    if (m_message.isSet()) {
        obj.insert(QString("message"), ::dc_rest::toJsonValue(m_message));
    }
    return obj;
}

QDateTime OAIPinnedMessageResponse::getPinnedAt() const {
    return m_pinned_at;
}
void OAIPinnedMessageResponse::setPinnedAt(const QDateTime &pinned_at) {
    m_pinned_at = pinned_at;
    m_pinned_at_isSet = true;
}

bool OAIPinnedMessageResponse::is_pinned_at_Set() const{
    return m_pinned_at_isSet;
}

bool OAIPinnedMessageResponse::is_pinned_at_Valid() const{
    return m_pinned_at_isValid;
}

OAIMessageResponse OAIPinnedMessageResponse::getMessage() const {
    return m_message;
}
void OAIPinnedMessageResponse::setMessage(const OAIMessageResponse &message) {
    m_message = message;
    m_message_isSet = true;
}

bool OAIPinnedMessageResponse::is_message_Set() const{
    return m_message_isSet;
}

bool OAIPinnedMessageResponse::is_message_Valid() const{
    return m_message_isValid;
}

bool OAIPinnedMessageResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pinned_at_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_message.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPinnedMessageResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pinned_at_isValid && m_message_isValid && true;
}

} // namespace dc_rest
