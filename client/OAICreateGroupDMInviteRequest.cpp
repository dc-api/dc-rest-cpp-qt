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

#include "OAICreateGroupDMInviteRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAICreateGroupDMInviteRequest::OAICreateGroupDMInviteRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICreateGroupDMInviteRequest::OAICreateGroupDMInviteRequest() {
    this->initializeModel();
}

OAICreateGroupDMInviteRequest::~OAICreateGroupDMInviteRequest() {}

void OAICreateGroupDMInviteRequest::initializeModel() {

    m_max_age_isSet = false;
    m_max_age_isValid = false;
}

void OAICreateGroupDMInviteRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICreateGroupDMInviteRequest::fromJsonObject(QJsonObject json) {

    m_max_age_isValid = ::dc_rest::fromJsonValue(m_max_age, json[QString("max_age")]);
    m_max_age_isSet = !json[QString("max_age")].isNull() && m_max_age_isValid;
}

QString OAICreateGroupDMInviteRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICreateGroupDMInviteRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_max_age_isSet) {
        obj.insert(QString("max_age"), ::dc_rest::toJsonValue(m_max_age));
    }
    return obj;
}

qint32 OAICreateGroupDMInviteRequest::getMaxAge() const {
    return m_max_age;
}
void OAICreateGroupDMInviteRequest::setMaxAge(const qint32 &max_age) {
    m_max_age = max_age;
    m_max_age_isSet = true;
}

bool OAICreateGroupDMInviteRequest::is_max_age_Set() const{
    return m_max_age_isSet;
}

bool OAICreateGroupDMInviteRequest::is_max_age_Valid() const{
    return m_max_age_isValid;
}

bool OAICreateGroupDMInviteRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_max_age_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICreateGroupDMInviteRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace dc_rest
