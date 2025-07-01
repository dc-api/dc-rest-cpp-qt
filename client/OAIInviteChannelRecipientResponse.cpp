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

#include "OAIInviteChannelRecipientResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIInviteChannelRecipientResponse::OAIInviteChannelRecipientResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIInviteChannelRecipientResponse::OAIInviteChannelRecipientResponse() {
    this->initializeModel();
}

OAIInviteChannelRecipientResponse::~OAIInviteChannelRecipientResponse() {}

void OAIInviteChannelRecipientResponse::initializeModel() {

    m_username_isSet = false;
    m_username_isValid = false;
}

void OAIInviteChannelRecipientResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIInviteChannelRecipientResponse::fromJsonObject(QJsonObject json) {

    m_username_isValid = ::dc_rest::fromJsonValue(m_username, json[QString("username")]);
    m_username_isSet = !json[QString("username")].isNull() && m_username_isValid;
}

QString OAIInviteChannelRecipientResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIInviteChannelRecipientResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_username_isSet) {
        obj.insert(QString("username"), ::dc_rest::toJsonValue(m_username));
    }
    return obj;
}

QString OAIInviteChannelRecipientResponse::getUsername() const {
    return m_username;
}
void OAIInviteChannelRecipientResponse::setUsername(const QString &username) {
    m_username = username;
    m_username_isSet = true;
}

bool OAIInviteChannelRecipientResponse::is_username_Set() const{
    return m_username_isSet;
}

bool OAIInviteChannelRecipientResponse::is_username_Valid() const{
    return m_username_isValid;
}

bool OAIInviteChannelRecipientResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_username_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIInviteChannelRecipientResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_username_isValid && true;
}

} // namespace dc_rest
