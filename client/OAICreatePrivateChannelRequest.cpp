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

#include "OAICreatePrivateChannelRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAICreatePrivateChannelRequest::OAICreatePrivateChannelRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICreatePrivateChannelRequest::OAICreatePrivateChannelRequest() {
    this->initializeModel();
}

OAICreatePrivateChannelRequest::~OAICreatePrivateChannelRequest() {}

void OAICreatePrivateChannelRequest::initializeModel() {

    m_recipient_id_isSet = false;
    m_recipient_id_isValid = false;

    m_access_tokens_isSet = false;
    m_access_tokens_isValid = false;

    m_nicks_isSet = false;
    m_nicks_isValid = false;
}

void OAICreatePrivateChannelRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICreatePrivateChannelRequest::fromJsonObject(QJsonObject json) {

    m_recipient_id_isValid = ::dc_rest::fromJsonValue(m_recipient_id, json[QString("recipient_id")]);
    m_recipient_id_isSet = !json[QString("recipient_id")].isNull() && m_recipient_id_isValid;

    m_access_tokens_isValid = ::dc_rest::fromJsonValue(m_access_tokens, json[QString("access_tokens")]);
    m_access_tokens_isSet = !json[QString("access_tokens")].isNull() && m_access_tokens_isValid;

    m_nicks_isValid = ::dc_rest::fromJsonValue(m_nicks, json[QString("nicks")]);
    m_nicks_isSet = !json[QString("nicks")].isNull() && m_nicks_isValid;
}

QString OAICreatePrivateChannelRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICreatePrivateChannelRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_recipient_id_isSet) {
        obj.insert(QString("recipient_id"), ::dc_rest::toJsonValue(m_recipient_id));
    }
    if (m_access_tokens.size() > 0) {
        obj.insert(QString("access_tokens"), ::dc_rest::toJsonValue(m_access_tokens));
    }
    if (m_nicks.size() > 0) {
        obj.insert(QString("nicks"), ::dc_rest::toJsonValue(m_nicks));
    }
    return obj;
}

QString OAICreatePrivateChannelRequest::getRecipientId() const {
    return m_recipient_id;
}
void OAICreatePrivateChannelRequest::setRecipientId(const QString &recipient_id) {
    m_recipient_id = recipient_id;
    m_recipient_id_isSet = true;
}

bool OAICreatePrivateChannelRequest::is_recipient_id_Set() const{
    return m_recipient_id_isSet;
}

bool OAICreatePrivateChannelRequest::is_recipient_id_Valid() const{
    return m_recipient_id_isValid;
}

QSet<QString> OAICreatePrivateChannelRequest::getAccessTokens() const {
    return m_access_tokens;
}
void OAICreatePrivateChannelRequest::setAccessTokens(const QSet<QString> &access_tokens) {
    m_access_tokens = access_tokens;
    m_access_tokens_isSet = true;
}

bool OAICreatePrivateChannelRequest::is_access_tokens_Set() const{
    return m_access_tokens_isSet;
}

bool OAICreatePrivateChannelRequest::is_access_tokens_Valid() const{
    return m_access_tokens_isValid;
}

QMap<QString, QString> OAICreatePrivateChannelRequest::getNicks() const {
    return m_nicks;
}
void OAICreatePrivateChannelRequest::setNicks(const QMap<QString, QString> &nicks) {
    m_nicks = nicks;
    m_nicks_isSet = true;
}

bool OAICreatePrivateChannelRequest::is_nicks_Set() const{
    return m_nicks_isSet;
}

bool OAICreatePrivateChannelRequest::is_nicks_Valid() const{
    return m_nicks_isValid;
}

bool OAICreatePrivateChannelRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_recipient_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_access_tokens.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_nicks.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICreatePrivateChannelRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace dc_rest
