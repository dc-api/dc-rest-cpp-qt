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

#include "OAIWebhookSlackEmbedField.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIWebhookSlackEmbedField::OAIWebhookSlackEmbedField(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIWebhookSlackEmbedField::OAIWebhookSlackEmbedField() {
    this->initializeModel();
}

OAIWebhookSlackEmbedField::~OAIWebhookSlackEmbedField() {}

void OAIWebhookSlackEmbedField::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;

    m_value_isSet = false;
    m_value_isValid = false;

    m_r_inline_isSet = false;
    m_r_inline_isValid = false;
}

void OAIWebhookSlackEmbedField::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIWebhookSlackEmbedField::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_value_isValid = ::dc_rest::fromJsonValue(m_value, json[QString("value")]);
    m_value_isSet = !json[QString("value")].isNull() && m_value_isValid;

    m_r_inline_isValid = ::dc_rest::fromJsonValue(m_r_inline, json[QString("inline")]);
    m_r_inline_isSet = !json[QString("inline")].isNull() && m_r_inline_isValid;
}

QString OAIWebhookSlackEmbedField::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIWebhookSlackEmbedField::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_value_isSet) {
        obj.insert(QString("value"), ::dc_rest::toJsonValue(m_value));
    }
    if (m_r_inline_isSet) {
        obj.insert(QString("inline"), ::dc_rest::toJsonValue(m_r_inline));
    }
    return obj;
}

QString OAIWebhookSlackEmbedField::getName() const {
    return m_name;
}
void OAIWebhookSlackEmbedField::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIWebhookSlackEmbedField::is_name_Set() const{
    return m_name_isSet;
}

bool OAIWebhookSlackEmbedField::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIWebhookSlackEmbedField::getValue() const {
    return m_value;
}
void OAIWebhookSlackEmbedField::setValue(const QString &value) {
    m_value = value;
    m_value_isSet = true;
}

bool OAIWebhookSlackEmbedField::is_value_Set() const{
    return m_value_isSet;
}

bool OAIWebhookSlackEmbedField::is_value_Valid() const{
    return m_value_isValid;
}

bool OAIWebhookSlackEmbedField::isRInline() const {
    return m_r_inline;
}
void OAIWebhookSlackEmbedField::setRInline(const bool &r_inline) {
    m_r_inline = r_inline;
    m_r_inline_isSet = true;
}

bool OAIWebhookSlackEmbedField::is_r_inline_Set() const{
    return m_r_inline_isSet;
}

bool OAIWebhookSlackEmbedField::is_r_inline_Valid() const{
    return m_r_inline_isValid;
}

bool OAIWebhookSlackEmbedField::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_value_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_r_inline_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIWebhookSlackEmbedField::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace dc_rest
