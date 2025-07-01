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

#include "OAIOAuth2GetKeys.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIOAuth2GetKeys::OAIOAuth2GetKeys(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOAuth2GetKeys::OAIOAuth2GetKeys() {
    this->initializeModel();
}

OAIOAuth2GetKeys::~OAIOAuth2GetKeys() {}

void OAIOAuth2GetKeys::initializeModel() {

    m_keys_isSet = false;
    m_keys_isValid = false;
}

void OAIOAuth2GetKeys::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOAuth2GetKeys::fromJsonObject(QJsonObject json) {

    m_keys_isValid = ::dc_rest::fromJsonValue(m_keys, json[QString("keys")]);
    m_keys_isSet = !json[QString("keys")].isNull() && m_keys_isValid;
}

QString OAIOAuth2GetKeys::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOAuth2GetKeys::asJsonObject() const {
    QJsonObject obj;
    if (m_keys.size() > 0) {
        obj.insert(QString("keys"), ::dc_rest::toJsonValue(m_keys));
    }
    return obj;
}

QList<OAIOAuth2Key> OAIOAuth2GetKeys::getKeys() const {
    return m_keys;
}
void OAIOAuth2GetKeys::setKeys(const QList<OAIOAuth2Key> &keys) {
    m_keys = keys;
    m_keys_isSet = true;
}

bool OAIOAuth2GetKeys::is_keys_Set() const{
    return m_keys_isSet;
}

bool OAIOAuth2GetKeys::is_keys_Valid() const{
    return m_keys_isValid;
}

bool OAIOAuth2GetKeys::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_keys.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOAuth2GetKeys::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_keys_isValid && true;
}

} // namespace dc_rest
