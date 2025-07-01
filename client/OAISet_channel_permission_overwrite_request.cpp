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

#include "OAISet_channel_permission_overwrite_request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAISet_channel_permission_overwrite_request::OAISet_channel_permission_overwrite_request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISet_channel_permission_overwrite_request::OAISet_channel_permission_overwrite_request() {
    this->initializeModel();
}

OAISet_channel_permission_overwrite_request::~OAISet_channel_permission_overwrite_request() {}

void OAISet_channel_permission_overwrite_request::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_allow_isSet = false;
    m_allow_isValid = false;

    m_deny_isSet = false;
    m_deny_isValid = false;
}

void OAISet_channel_permission_overwrite_request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISet_channel_permission_overwrite_request::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_allow_isValid = ::dc_rest::fromJsonValue(m_allow, json[QString("allow")]);
    m_allow_isSet = !json[QString("allow")].isNull() && m_allow_isValid;

    m_deny_isValid = ::dc_rest::fromJsonValue(m_deny, json[QString("deny")]);
    m_deny_isSet = !json[QString("deny")].isNull() && m_deny_isValid;
}

QString OAISet_channel_permission_overwrite_request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISet_channel_permission_overwrite_request::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_allow_isSet) {
        obj.insert(QString("allow"), ::dc_rest::toJsonValue(m_allow));
    }
    if (m_deny_isSet) {
        obj.insert(QString("deny"), ::dc_rest::toJsonValue(m_deny));
    }
    return obj;
}

qint32 OAISet_channel_permission_overwrite_request::getType() const {
    return m_type;
}
void OAISet_channel_permission_overwrite_request::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAISet_channel_permission_overwrite_request::is_type_Set() const{
    return m_type_isSet;
}

bool OAISet_channel_permission_overwrite_request::is_type_Valid() const{
    return m_type_isValid;
}

qint32 OAISet_channel_permission_overwrite_request::getAllow() const {
    return m_allow;
}
void OAISet_channel_permission_overwrite_request::setAllow(const qint32 &allow) {
    m_allow = allow;
    m_allow_isSet = true;
}

bool OAISet_channel_permission_overwrite_request::is_allow_Set() const{
    return m_allow_isSet;
}

bool OAISet_channel_permission_overwrite_request::is_allow_Valid() const{
    return m_allow_isValid;
}

qint32 OAISet_channel_permission_overwrite_request::getDeny() const {
    return m_deny;
}
void OAISet_channel_permission_overwrite_request::setDeny(const qint32 &deny) {
    m_deny = deny;
    m_deny_isSet = true;
}

bool OAISet_channel_permission_overwrite_request::is_deny_Set() const{
    return m_deny_isSet;
}

bool OAISet_channel_permission_overwrite_request::is_deny_Valid() const{
    return m_deny_isValid;
}

bool OAISet_channel_permission_overwrite_request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_allow_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_deny_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISet_channel_permission_overwrite_request::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace dc_rest
